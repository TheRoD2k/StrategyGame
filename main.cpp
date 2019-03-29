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
    try
    {
        player1.AddUnit(*player1.GetFactory(), "infantry");
    }
    catch (int e) {
        if (e == 1) {
            std::cout << "No such a factory" << std::endl;
        }
    }
    game_map->Print();
    return 0;
}