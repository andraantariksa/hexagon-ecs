#pragma once

#include "../ECS.hpp"
#include "Storage.hpp"

namespace HxECS { namespace Storage
{
    template <typename T>
    class VectorStorage: AbstractStorage<T>
    {
        private:
            std::vector<T*> data;
        public:
            VectorStorage();
            ~VectorStorage();
            T get(HxECS::Index);
            void remove(HxECS::Index);
            void insert(HxECS::Index, T);
    };
} }