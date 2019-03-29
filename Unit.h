//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_UNIT_H
#define STRATEGYGAME_UNIT_H

#include <cmath>

class Unit
{
public:
    void TakeDamage(int damage);    // Получить урон с учетом брони
    int GetDamage() const;  // Показывает, сколько урона наносит юнит
    bool IsAlive() const;
    bool GetX() const;
    bool GetY() const;
    bool IsReachable(Unit &enemy) const;   // True, если на расстоянии атаки
    void Attack(Unit &enemy) const; // Атака с проверкой достижимости
    int GetPrice() const;
    virtual void Show() = 0;
protected:
    Unit() = default;
    int _hp, _damage, _armor,
            _cost, _range, _x, _y;
};


void Unit::TakeDamage(int damage)
{
    damage -= _armor;
    if (damage < 0)
        damage = 0;
    _hp -= damage;
    if (_hp < 0)
        _hp = 0;
}

int Unit::GetDamage() const
{
    return _damage;
}

bool Unit::IsAlive() const
{
    return _hp > 0;
}

bool Unit::GetX() const
{
    return _x;
}

bool Unit::GetY() const
{
    return _y;
}

bool Unit::IsReachable(Unit &enemy) const
{
    int dx = std::abs(_x - enemy.GetX()),
            dy = std::abs(_y - enemy.GetY());
    return _range >= std::round(std::sqrt(dx*dx + dy*dy) - 0.5);
}

void Unit::Attack(Unit &enemy) const
{
    if (IsReachable(enemy))
        enemy.TakeDamage(_damage);
}

int Unit::GetPrice() const
{
    return _cost;
}

//============================================

class Infantry : public Unit
{
public:
private:
};

class Archer : public Unit
{
public:
private:
};

class Magician : public Unit
{
public:
private:
};

//=============================================

class HumanInfantry : public Infantry
{
public:
    explicit HumanInfantry(int x=0, int y=0) {
        _hp = 100;
        _damage = 50;
        _armor = 20;
        _cost = 10;
        _range = 1;
        _x = x;
        _y = y;
    }

    void Show() final {
        std::cout << "I am human soldier" << std::endl;
    }
private:
};

class HumanArcher : public Archer
{
public:
    void Show() final {
        std::cout << "I am human archer" << std::endl;
    }
private:
};

class HumanMagician : public Magician
{
public:
    void Show() final {
        std::cout << "I am human magician" << std::endl;
    }
private:
};

class OrcInfantry : public Infantry
{
public:
    void Show() final {
        std::cout << "I am orc soldier" << std::endl;
    }
private:
};

class OrcArcher : public Archer
{
public:
    void Show() final {
        std::cout << "I am orc archer" << std::endl;
    }
private:
};

class OrcMagician : public Magician
{
public:
    void Show() final {
        std::cout << "I am orc magician" << std::endl;
    }
private:
};

#endif //STRATEGYGAME_UNIT_H
