#pragma once

#include "Component.hpp"
#include "Entity.hpp"

namespace HxECS {

    class World
    {
        public:
            World();
            ~World();
            World create_entity();
            World with(Component);
            Entity build();
            template <typename T>
            void Register();
    };

}