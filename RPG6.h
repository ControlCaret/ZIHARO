#include <string>

struct Player
{
    std::string name;
    int level;
    int health;
    int damage;
    int floor;
};

struct Monster
{
    std::string name;
    int health;
    int damage;
};

void showPlayerStatus(Player player)
{
    std::cout << "========================" << std::endl;
    std::cout << "이름: " << player.name << std::endl;
    std::cout << "레벨: " << player.level << std::endl;
    std::cout << "체력: " << player.health << std::endl;
    std::cout << "공격력: " << player.damage << std::endl;
    std::cout << "층: " << player.floor << std::endl;
    std::cout << "========================" << std::endl;
}

void showMonsterStatus(Monster monster)
{
    std::cout << "========================" << std::endl;
    std::cout << "이름: " << monster.name << std::endl;
    std::cout << "체력: " << monster.health << std::endl;
    std::cout << "공격력: " << monster.damage << std::endl;
    std::cout << "========================" << std::endl;
}

struct Monster slime = { "슬라임", 10, 1};
struct Monster worm = { "지렁이", 20, 3};
struct Monster mole = { "두더지", 30, 4 };
struct Monster spider = { "거미", 40, 5 };
struct Monster roach = { "바선생", 50, 10 };
struct Monster zombie = { "좀비", 60, 6 };
struct Monster skeleton = { "스켈레톤", 70, 7 };
struct Monster ghost = { "유령", 80, 8 };
struct Monster goblin = { "고블린", 90, 9 };
struct Monster racoon = { "너구LEE", 100, 50 };
