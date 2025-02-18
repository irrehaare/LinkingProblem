#include "LinkingProblem.hpp"
#include <GameState.hpp>
#include <vector>


int main()
{
    GameState gameState{ };
    Entity e1{};
    Entity e2{};
    Entity e3{};
    gameState.entities = std::vector{ e1, e2, e3 };

    return 0;
}