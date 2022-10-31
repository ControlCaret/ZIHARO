#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include "RPG6.h"

int main()
{
    std::cout << "========================" << std::endl;
    std::cout << "여기에 게임 이름을 입력해 주세요." << std::endl;
    std::cout << "========================" << std::endl;

    //std::cout << "1. 새 게임\t 2. 불러오기\t 3. 종료\n" << std::endl;

    // implement here

    std::cout << std::endl;

    struct Player player;

    std::cout << "이름을 입력해 주세요: ";
    std::cin >> player.name;
    player.health = 100;
    player.damage = 10;
    player.level = 1;
    player.floor = 1;
    srand(time(NULL));

    showPlayerStatus(player);

    while(true)
    {
        std::cout << "현재 층: " << player.floor << std::endl;

        Monster monster;

        // should implement enum
        int randomMonster = rand() % 10;
        if(randomMonster == 0)
            monster = slime;
        else if(randomMonster == 1)
            monster = worm;
        else if(randomMonster == 2)
            monster = mole;
        else if(randomMonster == 3)
            monster = spider;
        else if(randomMonster == 4)
            monster = roach;
        else if(randomMonster == 5)
            monster = zombie;
        else if(randomMonster == 6)
            monster = skeleton;
        else if(randomMonster == 7)
            monster = ghost;
        else if(randomMonster == 8)
            monster = goblin;
        else if(randomMonster == 9)
            monster = racoon;

        std::cout << monster.name << "이(가) 나타났다!" << std::endl;
        std::cout << monster.health << " " << monster.damage << std::endl;

        while(true)
        {
            std::cout << "1. 공격\t2. 플레이어 정보\t 3. 몬스터 정보" << std::endl;

            int input;

            std::cin >> input;

            if(input == 1)
            {
                monster.health -= player.damage;
                std::cout << monster.name << "에게 " << player.damage << "의 데미지를 주었다!" << std::endl;
                std::cout << monster.name << "의 체력: " << monster.health << std::endl;

                if(monster.health <= 0)
                {
                    std::cout << monster.name << "을(를) 처치했다!" << std::endl;
                    player.floor++;
                    break;
                }

                player.health -= monster.damage;
                std::cout << monster.name << "에게 " << monster.damage << "의 데미지를 받았다!" << std::endl;
                std::cout << "남은 체력: " << player.health << std::endl;

                if(player.health <= 0)
                {
                    std::cout << "당신은 죽었습니다." << std::endl;
                    return 0;
                }
            }
            if(input == 2)
            {
                showPlayerStatus(player);
            }
            if(input == 3)
            {
                showMonsterStatus(monster);
            }
        }
    }

    return 0;
}
