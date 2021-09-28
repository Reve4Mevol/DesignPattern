//
// Created by Administrator on 2021-09-28.
//

#include "Singleton.h"

Singleton* Singleton::m_instance = nullptr;
std::atomic<Singleton *> Singleton::m_instance_final = nullptr;
std::mutex Singleton::m_mutex;

/**
 * 假如对象已经创建了，if一直不会成立，这种情况下每次拿单例都还面临一次加解锁操作
 * 影响效率
 * @return
 */
Singleton *Singleton::getInstance() {
    m_mutex.lock();
    if (!m_instance) {
        m_instance = new Singleton();
    }
    m_mutex.unlock();
    return m_instance;
}

/**
 * D C L P  double check lock pattern
 * 思路是假如对象创建好了就直接返回，没有锁操作，如果对象还是空指针，再考虑可能两个线程同时实例化单例的问题
 * 逻辑上没有问题，实际上 m_instance = new Singleton 这一句不是原子操作，可能存在内存读写reorder问题
 * m_instance = new Singleton;可以分解成3步骤；
 * 1 分配内存
 * 2 调用构造器对分配的内存初始化
 * 3 把地址给m_instance指针
 * ！！ 编译器优化等情况发生reorder时候，第二，第三步骤可能互换 ！！
 * ！！ 这种情况下另一个线程来拿单例，由于m_instance已经有了地址不是空指针，就返回了这个单例，但其实它只是分配了内存，并没有执行构造器，无法使用 ！！
 */
Singleton *Singleton::getInstance_doubleCheck() {
    if (!m_instance) {
        m_mutex.lock();
        // 这里不能直接写m_instance = new Singleton，不然还是有new两次问题
        if (!m_instance) {
            m_instance = new Singleton();
        }
        m_mutex.unlock();
    }
    return m_instance;
}

Singleton *Singleton::getInstance_final() {
    Singleton *tmp = m_instance_final.load(std::memory_order_relaxed);
    // void atomic_thread_fence（memory_order order
    // 按照指示order，建立非原子和宽松原子访问的内存同步排序，而无需关联的原子操作。
    // 例如，memory_order_release在线程A 的围栏之前发生的所有非原子和宽松的原子存储
    // 都将与线程B在memory_order_acquire围栅之后制作的相同位置的非原子和放宽的原子加载同步。
    std::atomic_thread_fence(std::memory_order_acquire);
    if (!tmp) {
        std::lock_guard<std::mutex> lockHelper(m_mutex);
        tmp = m_instance_final.load(std::memory_order_relaxed);
        if (tmp == nullptr) {
            tmp = new Singleton;
            std::atomic_thread_fence(std::memory_order_release);
            m_instance_final.store(tmp, std::memory_order_relaxed);
        }
    }
    return m_instance_final;
}
