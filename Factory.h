//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_FACTORY_H
#define STRATEGYGAME_FACTORY_H

#include "Unit.h"
#include <vector>

class ArmyFactory {
protected:
    int _x;
    int _y;
    int _cost;
public:
    virtual Infantry* CreateInfantry() = 0;
    virtual Archer* CreateArcher() = 0;
    virtual Magician* CreateMagician() = 0;

};

class HumanArmyFactory: public ArmyFactory {
public:
    explicit HumanArmyFactory(int x=0, int y=0, int cost=0) {
        _x = x;
        _y = y;
        _cost = cost;
    }

    Archer* CreateArcher() final {
        auto* unit = new HumanArcher();
        return unit;
    }

    Infantry* CreateInfantry() final {
        auto* unit = new HumanInfantry();
        return unit;
    }

    Magician* CreateMagician() final {
        auto* unit = new HumanMagician();
        return unit;
    }
};

class OrcArmyFactory: public ArmyFactory {
public:
    Archer* CreateArcher() final {
        auto* unit = new OrcArcher();
        return unit;
    }

    Infantry* CreateInfantry() final {
        auto* unit = new OrcInfantry();
        return unit;
    }

    Magician* CreateMagician() final {
        auto* unit = new OrcMagician();
        return unit;
    }
};





#endif //STRATEGYGAME_FACTORY_H
