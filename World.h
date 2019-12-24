#pragma once

#include "Component.hpp"
#include "Entity.hpp"

namespace HxECS {

    class World
    {
        public:
            World create_entity();
            World with(Component);
            Entity build();
    };

}