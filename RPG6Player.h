#include <string>

class Player
{
private:
    std::string name;
    int health;
    int damage;
    int level;
    int floor;

public:
    Player(std::string name, int health, int damage, int level, int floor);
    std::string getName();
    int getHealth();
    int getDamage();
    int getLevel();
    int getFloor();
    void setHealth(int health);
    void setDamage(int damage);
    void setLevel(int level);
    void nextFloor();
};

Player::Player(std::string name, int health, int damage, int level, int floor)
{
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->level = level;
    this->floor = floor;
}

std::string Player::getName()
{
    return this->name;
}

int Player::getHealth()
{
    return this->health;
}

int Player::getDamage()
{
    return this->damage;
}

int Player::getLevel()
{
    return this->level;
}

int Player::getFloor()
{
    return this->floor;
}

void Player::setHealth(int health)
{
    this->health += health;
}

void Player::setDamage(int damage)
{
    this->damage = damage;
}

void Player::setLevel(int level)
{
    this->level = level;
}

void Player::nextFloor()
{
    this->floor += 1;
}

void showPlayerStatus(Player player)
{
    std::cout << "========================" << std::endl;
    std::cout << "이름: " << player.getName()<< std::endl;
    std::cout << "레벨: " << player.getLevel() << std::endl;
    std::cout << "체력: " << player.getHealth() << std::endl;
    std::cout << "공격력: " << player.getDamage() << std::endl;
    std::cout << "층: " << player.getFloor() << std::endl;
    std::cout << "========================" << std::endl;
}
