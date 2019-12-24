#pragma once

#include <unordered_map>

namespace HxECS
{
    using Index = unsigned int;

    class ECS
    {
        private:
            Index current_id;
        public:
            ECS();
            ~ECS();
    };
}

#include "Storage/Storage.hpp"
#include "Entity.hpp"
#include "Component.hpp"
#include "System.h"
#include "World.h"