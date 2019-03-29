#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Player.h"
#include "Army.h"
#include "Map.h"
#include "Unit.h"

TEST(CreateUnit, HumanUnit) {
    Unit* unit1 = new HumanInfantry();
    ASSERT_TRUE(unit1->Show() == "I am human soldier");
    delete unit1;

    Unit* unit2 = new HumanArcher();
    ASSERT_TRUE(unit2->Show() == "I am human archer");
    delete unit2;

    Unit* unit3 = new HumanMagician();
    ASSERT_TRUE(unit3->Show() == "I am human magician");
    delete unit3;
}

TEST(CreateUnit, OrcUnit) {
    Unit* unit1 = new OrcInfantry();
    ASSERT_TRUE(unit1->Show() == "I am orc soldier");
    delete unit1;

    Unit* unit2 = new OrcArcher();
    ASSERT_TRUE(unit2->Show() == "I am orc archer");
    delete unit2;

    Unit* unit3 = new OrcMagician();
    ASSERT_TRUE(unit3->Show() == "I am orc magician");
    delete unit3;
}

TEST(CreateFactory, HumanFactory) {
    ArmyFactory* factory = new HumanArmyFactory();
    ASSERT_TRUE(factory->Show() == "HumanArmyFactory");
}

TEST(CreateFactory, OrcFactory) {
    ArmyFactory* factory = new OrcArmyFactory();
    ASSERT_TRUE(factory->Show() == "OrcArmyFactory");
}

TEST(MapTest, EmptyMap) {
    World* map = new World(10, 20);
    map->Print();
    ASSERT_TRUE(map->ShowCell(1, 1) == "Cell is empty");
}

TEST(MapTest, SetUnits) {
    World* map = new World(10, 20);
    map->Set(new HumanArcher, 1, 1);
    map->Set(new OrcMagician, 3, 3);
    map->Print();
    ASSERT_TRUE(map->ShowCell(1, 1) == "I am human archer");
    ASSERT_TRUE(map->ShowCell(3, 3) == "I am orc magician");
}

TEST(MapTest, SetFactories) {
    World* map = new World(10, 20);
    map->Set(new HumanArmyFactory, 2, 1);
    map->Set(new OrcArmyFactory, 4, 5);
    map->Print();
    ASSERT_TRUE(map->ShowCell(2, 1) == "HumanArmyFactory");
    ASSERT_TRUE(map->ShowCell(4, 5) == "OrcArmyFactory");
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}