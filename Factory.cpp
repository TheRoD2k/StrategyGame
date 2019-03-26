//
// Created by alexander on 27.03.19.
//

#include "Unit.cpp"

class ArmyFactory {
public:
    virtual Infantry* CreateInfantry() = 0;
    virtual Archery* CreateArchery() = 0;
    virtual Magician* CreateMagician() = 0;

};

class HumanArmyFactory: public ArmyFactory {

};

class OrcArmyFactory: public ArmyFactory {

};

class HumanArcheryFactory: public HumanArmyFactory {

};

class HumanInfantryFactory: public HumanArmyFactory {

};

class HumanMagicianFactory: public HumanArmyFactory {

};

class OrcArcheryFactory: public OrcArmyFactory {

};

class OrcInfantryFactory: public OrcArmyFactory {

};

class OrcMagicianFactory: public OrcArmyFactory {

};