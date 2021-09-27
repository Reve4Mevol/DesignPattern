/**
 * 程序仅展示思路，可能存在内存泄漏，代码风格等问题
 */

#include <iostream>
#include "Player.h"
#include "Factory/Mp4Factory.h"
#include "Factory/RmvbFactory.h"

int main() {
    Mp4Factory *mp4factory = new Mp4Factory;
    RmvbFactory *rmvbFactory = new RmvbFactory;
    Player *mp4Player = new Player(mp4factory);
    Player *rmvbPlayer = new Player(rmvbFactory);
    mp4Player->play();
    rmvbPlayer->play();
    delete(mp4Player);
    delete(rmvbPlayer);
    delete(mp4factory);
    delete(rmvbFactory);
}




