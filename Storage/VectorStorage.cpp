#include <vector>

#include "../ECS.hpp"
#include "VectorStorage.hpp"

namespace HxECS { namespace Storage
{

    template <typename T>
    VectorStorage<T>::VectorStorage()
    {
        for (std::vector<*T>::iterator it = this->data.begin(); it != this->data.end(); ++i)
        {
            *it = nullptr;
        }
    }

    template <typename T>
    VectorStorage<T>::~VectorStorage()
    {
        for (std::vector<*T>::iterator it = this->data.begin(); it != this->data.end(); ++i)
        {
            delete *it;
        }
    }

    template <typename T>
    T* VectorStorage<T>::get(HxECS::Index index)
    {
        return this->data[index];
    }

    template <typename T>
    void VectorStorage<T>::insert(HxECS::Index index, T data)
    {
        if (index >= this->data.capacity())
        {
            const unsigned int delta = index + 1 - this->data.capacity();
        }
        this->data[index] = new data;
    }

    template <typename T>
    void VectorStorage<T>::insert(HxECS::Index index, T data)
    {
        delete this->data[index];
    }

} }