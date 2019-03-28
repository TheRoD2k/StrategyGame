//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_FACTORY_H
#define STRATEGYGAME_FACTORY_H

#include "Unit.h"
#include <vector>

class ArmyFactory {
private:
    int _x;
    int _y;
    const int _cost;
public:
    ArmyFactory() = delete;

    virtual Infantry* CreateInfantry() = 0;
    virtual Archer* CreateArcher() = 0;
    virtual Magician* CreateMagician() = 0;

};

class HumanArmyFactory: public ArmyFactory {
public:
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
