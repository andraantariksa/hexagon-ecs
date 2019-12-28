#pragma once

#include <queue>

#include "Entity.hpp"

namespace HxECS
{

    class EntityManager
    {
        private:
            std::queue<HxECS::Entity> entities;
            
    };

}