#pragma once

#include "../ECS.hpp"
#include "UnorderedMapStorage.hpp"

namespace HxECS { namespace Storage
{

    template <typename T>
    void UnorderedMapStorage<T>::insert(HxECS::Index index, T inserted_data)
    {
        this->data[index] = inserted_data;
    }

    template <typename T>
    T UnorderedMapStorage<T>::get(HxECS::Index index)
    {
        return this->data[index];
    }

    template <typename T>
    void UnorderedMapStorage<T>::remove(HxECS::Index index)
    {
        this->data.erase(index);
    }

} }