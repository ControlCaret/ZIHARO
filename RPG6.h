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

struct Monster slime = { "슬라임", 10, 2};
struct Monster worm = { "지렁이", 20, 3};
struct Monster goblin = { "고블린", 30, 4};
