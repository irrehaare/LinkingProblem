#pragma once

#include <vector>
#include <Entity.hpp> // Why does it work?! 
// Where is "cannot open source file "Entity.hpp"?

struct GameState {
    explicit GameState() = default;
    std::vector<Entity> entities = {};
};