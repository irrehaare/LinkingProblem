#pragma once

#include <vector>
#include <Entity.hpp>

struct GameState {
    explicit GameState() = default;
    std::vector<Entity> entities = {};
};