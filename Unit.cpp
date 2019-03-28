//

// Created by frozenice on 3/27/19.
//

#include <cmath>

class Unit
{
public:
    Unit();
    virtual ~Unit();

    void TakeDamage(int damage);    // Получить урон с учетом брони
    int GetDamage() const;  // Показывает, сколько урона наносит юнит
    bool IsAlive() const;
    bool GetX() const;
    bool GetY() const;
    bool IsReachable(Unit &enemy) const;   // True, если на расстоянии атаки
    void Attack(Unit &enemy) const; // Атака с проверкой достижимости
    int GetPrice() const;
private:
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
private:
};

class HumanArcher : public Archer
{
public:
private:
};

class HumanMagician : public Magician
{
public:
private:
};

class OrcInfantry : public Infantry
{
public:
private:
};

class OrcArcher : public Archer
{
public:
private:
};

class OrcMagician : public Magician
{
public:
private:
};