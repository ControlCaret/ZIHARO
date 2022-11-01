#include <string>

class Monster
{
private:
    std::string name;
    int health;
    int damage;
public:
    Monster(std::string name, int health, int damage);
    Monster(const Monster&);
    Monster();
    std::string getName();
    int getHealth();
    int getDamage();
    void setHealth(int health);
    void setDamage(int damage);
};

Monster::Monster(std::string name, int health, int damage)
{
    this->name = name;
    this->health = health;
    this->damage = damage;
}

Monster::Monster(const Monster& monster)
{
    this->name = monster.name;
    this->health = monster.health;
    this->damage = monster.damage;
}

Monster::Monster()
{
}

std::string Monster::getName()
{
    return this->name;
}

int Monster::getHealth()
{
    return this->health;
}

int Monster::getDamage()
{
    return this->damage;
}

void Monster::setHealth(int health)
{
    this->health += health;
}

void Monster::setDamage(int damage)
{
    this->damage = damage;
}

Monster slime("슬라임", 10, 1);
Monster worm("벌레", 20, 3);
Monster mole("두더지", 30, 4);
Monster spider("거미", 40, 5);
Monster roach("강아지", 50, 10);
Monster zombie("좀비", 60, 6);
Monster skeleton("스켈레톤", 70, 7);
Monster ghost("유령", 80, 8);
Monster goblin("고블린", 90, 9);
Monster racoon("너구Lee", 100, 50);

void showMonsterStatus(Monster monster)
{
    std::cout << "========================" << std::endl;
    std::cout << "이름: " << monster.getName() << std::endl;
    std::cout << "체력: " << monster.getHealth() << std::endl;
    std::cout << "공격력: " << monster.getDamage() << std::endl;
    std::cout << "========================" << std::endl;
}
