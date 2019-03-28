//
// Created by alexander on 28.03.19.
//

#ifndef STRATEGYGAME_PLAYER_H
#define STRATEGYGAME_PLAYER_H

#include <vector>
#include <string>
#include <typeinfo>
#include "Factory.h"
#include "Army.h"

// Храним данные игрока
class Player {
private:
    std::string _race;
    std::vector<ArmyFactory*> _factories;
    Army* _army;
    int _money;
public:
    explicit Player(const std::string& race, int money=0) {
        _race = race;
        _money = money;
        _factories = {};
        if (_race == "human") {
            _army = new HumanArmy();
        }
        else {
            _army = new OrcArmy();
        }
    }

    void Show() {
        std::cout << _race << '\n' << _money << std::endl;
    }
    // Действия с армией
    void AddUnit(ArmyFactory& factory);

    void AddFactory(std::string factory_name);

    void RemoveUnit(int unit_id=0);

    void RemoveFactory(int factory_id=0);

};

void Player::AddUnit(ArmyFactory &factory) {

}

#endif //STRATEGYGAME_PLAYER_H
