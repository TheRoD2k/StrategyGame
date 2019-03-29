#include <iostream>
#include "Player.h"
#include "Army.h"
#include "Map.h"
#include "Unit.h"

int main()
{
    World* game_map = new World(10, 10);
    Player player1(game_map, "human");
    player1.AddFactory();
    ArmyFactory* fact = new HumanArmyFactory();
    player1.AddUnit(*fact, "infantry");
    game_map->Print();
    return 0;
}