//
// Created by alexander on 27.03.19.
//

#include "Unit.cpp"
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

};

class OrcArmyFactory: public ArmyFactory {

};

class HumanArcherFactory: public HumanArmyFactory {
public:
    Archer* CreateArcher() final {
        auto* unit = new HumanArcher();
        return unit;
    }
};

class HumanInfantryFactory: public HumanArmyFactory {
public:
    Infantry* CreateInfantry() final {
        auto* unit = new HumanInfantry();
        return unit;
    }
};

class HumanMagicianFactory: public HumanArmyFactory {
public:
    Magician* CreateMagician() final {
        auto* unit = new HumanMagician();
        return unit;
    }
};

class OrcArcherFactory: public OrcArmyFactory {

};

class OrcInfantryFactory: public OrcArmyFactory {

};

class OrcMagicianFactory: public OrcArmyFactory {

};

class Army { // Создаем армию
private:
    std::vector<Infantry*> _m_infantry;
    std::vector<Archer*> _m_archer;
    std::vector<Magician*> _m_magician;
public:
    void AddInfantry(ArmyFactory& factory);
    void AddArcher(ArmyFactory& factory);
    void AddMagician(ArmyFactory& factory);

};

// Добавляем юнитов в армию

void Army::AddInfantry(ArmyFactory& factory) {
    _m_infantry.push_back(factory.CreateInfantry());
}

void Army::AddArcher(ArmyFactory& factory) {
    _m_archer.push_back(factory.CreateArcher());
}

void Army::AddMagician(ArmyFactory& factory) {
    _m_magician.push_back(factory.CreateMagician());
}


class HumanArmy: public Army {

};

class OrcArmy: public Army {

};
