#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <time.h>
#include <iostream>
#include <string>
#include "RPG6.h"
#include "RPG6Player.h"
#include "RPG6Monster.h"

int main()
{
    std::cout << "========================" << std::endl;
    std::cout << "여기에 게임 이름을 입력해 주세요." << std::endl;
    std::cout << "========================" << std::endl;

    //std::cout << "1. 새 게임\t 2. 불러오기\t 3. 종료\n" << std::endl;

    // implement here

    std::cout << std::endl;

    std::string name;
    std::cout << "이름을 입력해 주세요: ";
    std::cin >> name;
    Player player(name, 100, 10, 1, 1 );
    srand(time(NULL));

    showPlayerStatus(player);

    while(true)
    {
        std::cout << "현재 층: " << player.getFloor() << std::endl;

        Monster monster;

        int randomMonster = rand() % MONSTER;

        switch(randomMonster)
        {
            case SLIME:
                monster = Monster(slime);
                break;
            case WORM:
                monster = Monster(worm);
                break;
            case MOLE:
                monster = Monster(mole);
                break;
            case SPIDER:
                monster = Monster(spider);
                break;
            case ROACH:
                monster = Monster(roach);
                break;
            case ZOMBIE:
                monster = Monster(zombie);
                break;
            case SKELETON:
                monster = Monster(skeleton);
                break;
            case GHOST:
                monster = Monster(ghost);
                break;
            case GOBLIN:
                monster = Monster(goblin);
                break;
            case RACOON:
                monster = Monster(racoon);
                break;
            default:
                assert(false);
        }

        std::cout << monster.getName() << "이(가) 나타났다!" << std::endl;
        std::cout << monster.getHealth() << " " << monster.getDamage() << std::endl;

        while(true)
        {
            std::cout << "1. 공격\t2. 플레이어 정보\t 3. 몬스터 정보" << std::endl;

            int input;

            std::cin >> input;

            if(input == 1)
            {
                monster.setHealth(-player.getDamage());
                std::cout << monster.getName() << "에게 " << player.getDamage() << "의 데미지를 주었다!" << std::endl;
                std::cout << monster.getName() << "의 체력: " << monster.getHealth() << std::endl;

                if(monster.getHealth() <= 0)
                {
                    std::cout << monster.getName() << "을(를) 처치했다!" << std::endl;
                    player.nextFloor();
                    break;
                }

                player.setHealth(-monster.getDamage());
                std::cout << monster.getName() << "에게 " << monster.getDamage() << "의 데미지를 받았다!" << std::endl;
                std::cout << "남은 체력: " << player.getHealth() << std::endl;

                if(player.getHealth() <= 0)
                {
                    std::cout << "당신은 죽었습니다." << std::endl;
                    return 0;
                }
            }
            else if(input == 2)
            {
                showPlayerStatus(player);
            }
            else if(input == 3)
            {
                showMonsterStatus(monster);
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}
