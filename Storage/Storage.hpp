#pragma once

#include "../ECS.hpp"

namespace HxECS { namespace Storage {

    template <typename T>
    class AbstractStorage
    {
        public:
            virtual void insert(HxECS::Index, T) = 0;
            virtual void remove(HxECS::Index) = 0;
            virtual void get(HxECS::Index) = 0;
    };

}}

#include "UnorderedMapStorage.cpp"
#include "VectorStorage.cpp"