//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_ARMY_H
#define STRATEGYGAME_ARMY_H

#include "Factory.h"
#include "Unit.h"

class Army { // Создаем армию
private:
    std::vector<Unit*> _units;
public:
    void AddInfantry(ArmyFactory& factory);
    void AddArcher(ArmyFactory& factory);
    void AddMagician(ArmyFactory& factory);

    void ShowUnits();
};

void Army::ShowUnits() {
    for (int i = 0; i < _units.size(); ++i) {
        _units[i] ->Show();
    }
}
// Добавляем юнитов в армию

void Army::AddInfantry(ArmyFactory& factory) {
    _units.push_back(factory.CreateInfantry());
}

void Army::AddArcher(ArmyFactory& factory) {
    _units.push_back(factory.CreateArcher());
}

void Army::AddMagician(ArmyFactory& factory) {
    _units.push_back(factory.CreateMagician());
}


class HumanArmy: public Army {

};

class OrcArmy: public Army {

};

#endif //STRATEGYGAME_ARMY_H
