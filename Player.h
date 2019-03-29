//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_PLAYER_H
#define STRATEGYGAME_PLAYER_H

#include <vector>
#include <string>
#include <typeinfo>
#include "Factory.h"
#include "Army.h"
#include "Map.h"

// Храним данные игрока
class Player {
private:
    World* _map;
    std::string _race;
    std::vector<ArmyFactory*> _factories;
    Army* _army;
    int _money;
public:
    Player(World* map, const std::string& race, int money=0) {
        _map = map;
        _race = race;
        _money = money;
        _factories = {};
        if (_race == "human") {
            _army = new HumanArmy();
        }
        else {
            _army = new OrcArmy();
        }
        _army->SetMap(map);
    }

    std::string ShowRace() {
        return _race;
    }

    void ShowStats() {
        std::cout << _race << '\n' << _money << std::endl;
        _army ->ShowUnits();
    }

    // Действия с армией
    void AddUnit(ArmyFactory& factory, const std::string& unit_type);

    void AddFactory(int, int);

    ArmyFactory* GetFactory(int);

};

ArmyFactory* Player::GetFactory(int number=0) {
    if (_factories.size() <= number)
        throw 1;
    return _factories[number];
}

void Player::AddUnit(ArmyFactory &factory, const std::string& unit_type) {
    if (unit_type == "infantry")
        _army ->AddInfantry(factory);
    if (unit_type == "archer")
        _army ->AddArcher(factory);
    if (unit_type == "magician")
        _army ->AddMagician(factory);
}

void Player::AddFactory(int x=0, int y=0) {
    ArmyFactory* factory;
    if (_race == "human")
        factory = new HumanArmyFactory;
    else
        factory = new OrcArmyFactory;
    _factories.push_back(factory);
    _map ->Set(factory, x, y);
}

#endif //STRATEGYGAME_PLAYER_H
