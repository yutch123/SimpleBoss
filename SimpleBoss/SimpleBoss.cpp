// SimpleBoss
// Демонстрация наследования

#include <iostream>
using namespace std;

class Enemy 
{
public: 
    int m_Damage;
    Enemy();
    void Attack() const;
};

Enemy::Enemy():
m_Damage(10)
{

}

void Enemy::Attack() const
{
    cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

class Boss : public Enemy // наследование класса Boss от класса Enemy
{
public:
    int m_DamageMultiplier;
    Boss();
    void SpecialAttack() const;
};

Boss::Boss():
m_DamageMultiplier(3)
{

}

void Boss::SpecialAttack() const
{
    cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
    cout << " damage points!\n";
}

int main()
{
    cout << "Creating an enemy.\n";
    Enemy enemy1; // создание объекта класса Enemy
    enemy1.Attack(); // вызов его функции-члена Attack()
    cout << "\nCreating a boss.\n";
    Boss boss1; // создание объекта класса Boss
    boss1.Attack(); // обращение к функции Attack класса Boss 
    boss1.SpecialAttack(); // обращение к функции SpecialAttack класса Boss
    return 0;
}


