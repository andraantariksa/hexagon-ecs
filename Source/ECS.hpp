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