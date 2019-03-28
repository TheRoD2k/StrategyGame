#include <iostream>
#include "Player.h"
#include "Army.h"

int main() {
    Player player1("human");
    HumanArmyFactory factory;
    player1.AddUnit(factory, "infantry");
    player1.Show();

    return 0;
}