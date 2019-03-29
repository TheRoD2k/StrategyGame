#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Player.h"
#include "Army.h"
#include "Map.h"
#include "Unit.h"

TEST(CreateUnit, HumanUnit) {
    Unit* unit = new HumanInfantry();
    ASSERT_TRUE(unit->Show() == "I am human soldier");
}


int main()
{
    return RUN_ALL_TESTS();
}