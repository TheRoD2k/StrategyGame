//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_ARMY_H
#define STRATEGYGAME_ARMY_H

#include "Factory.h"
#include "Unit.h"
#include "Map.h"

class Army { // Создаем армию
private:
    std::vector<Unit*> _units;
    World* _map = nullptr;
public:
    void AddInfantry(ArmyFactory& factory);
    void AddArcher(ArmyFactory& factory);
    void AddMagician(ArmyFactory& factory);

    void SetMap(World* map);
    void ShowUnits();
};


void Army::SetMap(World *map) {
    _map = map;
}

void Army::ShowUnits() {
    for (int i = 0; i < _units.size(); ++i) {
        _units[i] ->Show();
    }
}

// Добавляем юнитов в армию

void Army::AddInfantry(ArmyFactory& factory) {
    Infantry* unit = factory.CreateInfantry();
    _map->Set(unit, 1, 1);
    _units.push_back(unit);
}

void Army::AddArcher(ArmyFactory& factory) {
    Archer* unit = factory.CreateArcher();
    _map->Set(unit, 1, 1);
    _units.push_back(unit);
}

void Army::AddMagician(ArmyFactory& factory) {
    Magician* unit = factory.CreateMagician();
    _map->Set(unit, 1, 1);
    _units.push_back(unit);
}


class HumanArmy: public Army {

};

class OrcArmy: public Army {

};

#endif //STRATEGYGAME_ARMY_H
