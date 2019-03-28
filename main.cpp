#include <iostream>
#include "Player.h"
#include "Army.h"
#include "Map.h"
#include "Unit.h"

int main()
{
    World Map(20,50);
    Map.Set(new HumanArcher(), 2, 2);
    Map.Print();

    return 0;
}