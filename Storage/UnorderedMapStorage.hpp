#pragma once

#include <unordered_map>

#include "../ECS.hpp"
#include "Storage.hpp"

namespace HxECS { namespace Storage
{

    template <typename T>
    class UnorderedMapStorage: AbstractStorage<T>
    {
        private:
            std::unordered_map<HxECS::Index, T> data;
        public:
            void insert(T);
            T get(HxECS::Index);
            void remove(HxECS::Index);
    };

} }