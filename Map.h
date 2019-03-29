//
// Created by frozenice on 3/28/19.
//

#ifndef STRATEGYGAME_MAP_H
#define STRATEGYGAME_MAP_H
#include <vector>
#include <string>
#include "Unit.h"
#include "Factory.h"
#include <utility>
#include <iostream>


/*class ObjectWrapper
{
    ObjectWrapper() : {}
    ObjectWrapper(Unit* u) : Un(u) { object_type = "Unit"; }
    ObjectWrapper(ArmyFactory* f) : Fac(f) { object_type = "ArmyFactory"; }



    std::string object_type;
    Unit* Un;
    ArmyFactory* Fac;

};*/



class World
{
public:
    World(int N, int M);
    void Set(ArmyFactory* Fac, int x, int y);
    void Set(Unit* Un, int x, int y);
    void UnSet(int x,int y);
    void Print();
    std::string ShowCell(int x, int y);
private:
    std::vector<std::vector<ArmyFactory*>> _factory_map;
    std::vector<std::vector<Unit*>> _unit_map;
    int X, Y;
};

World::World(int N, int M)
{
    _factory_map = std::vector(N, std::vector<ArmyFactory*>(M, nullptr));
    _unit_map = std::vector(N, std::vector<Unit*>(M, nullptr));
    X = N;
    Y = M;
}

void World::Set(ArmyFactory* Fac, int x, int y)
{
    if (_factory_map[x][y] == nullptr && _unit_map[x][y] == nullptr)
        _factory_map[x][y] = Fac;
    else
        std::cout << "TRYING TO SET ON A USED CELL" << std::endl;
}

void World::Set(Unit* Un, int x, int y)
{
    if (_factory_map[x][y] == nullptr && _unit_map[x][y] == nullptr)
        _unit_map[x][y] = Un;
    else
        std::cout << "TRYING TO SET ON A USED CELL" << std::endl;
}

void World::UnSet(int x, int y)
{
    _factory_map[x][y] = nullptr;
    _unit_map[x][y] = nullptr;
}

void World::Print()
{
    for (int i = 0; i < X; i++)
    {
        std::cout << "|";
        for (int j = 0; j < Y; j++)
            if (_factory_map[i][j] != nullptr)
                std::cout << "F";
            else if (_unit_map[i][j] != nullptr)
                std::cout << "U";
            else
                std::cout << " ";
        std::cout << "|" << std::endl;
    }
    std::cout << std::endl;
}

std::string World::ShowCell(int x, int y)
{
    if (_factory_map[x][y] != nullptr)
    {
        return _factory_map[x][y]->Show();
    }

    if (_unit_map[x][y] != nullptr)
    {
        return _unit_map[x][y]->Show();
    }

    return  "Cell is empty";
}

#endif //STRATEGYGAME_MAP_H
