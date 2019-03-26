//
// Created by alexander on 27.03.19.
//

#include "Unit.cpp"
#include <vector>

class ArmyFactory {
public:
    virtual Infantry* CreateInfantry(int) = 0;
    virtual Archer* CreateArcher(int) = 0;
    virtual Magician* CreateMagician(int) = 0;

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

class Army { // Создаем армию
private:
    std::vector<Infantry*> _m_infantry;
    std::vector<Archer*> _m_archer;
    std::vector<Magician*> _m_magician;
public:
    void AddInfantry(ArmyFactory& factory, int amount);
    void AddArcher(ArmyFactory& factory, int amount);
    void AddMagician(ArmyFactory& factory, int amount);

};

// Добавляем юнитов в армию

void Army::AddInfantry(ArmyFactory& factory, int amount) {
    _m_infantry.push_back(factory.CreateInfantry(amount));
}

void Army::AddArcher(ArmyFactory& factory, int amount) {
    _m_archer.push_back(factory.CreateArcher(amount));
}

void Army::AddMagician(ArmyFactory& factory, int amount) {
    _m_magician.push_back(factory.CreateMagician(amount));
}

