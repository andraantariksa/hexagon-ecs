#include <vector>

#include "../ECS.hpp"
#include "VectorStorage.hpp"

namespace HxECS { namespace Storage
{

    template <typename T>
    VectorStorage<T>::VectorStorage()
    {
        for (typename std::vector<T*>::iterator it = this->data.begin(); it != this->data.end(); ++it)
        {
            *it = nullptr;
        }
    }

    template <typename T>
    VectorStorage<T>::~VectorStorage()
    {
        for (typename std::vector<T*>::iterator it = this->data.begin(); it != this->data.end(); ++it)
        {
            delete *it;
        }
    }

    template <typename T>
    T VectorStorage<T>::get(HxECS::Index index)
    {
        return *this->data[index];
    }

    template <typename T>
    void VectorStorage<T>::insert(HxECS::Index index, T data)
    {
        if (index >= this->data.capacity())
        {
            const unsigned int delta = index + 1 - this->data.capacity();
        }
        this->data[index] = new T;
        *this->data[index] = data;
    }

    template <typename T>
    void VectorStorage<T>::remove(HxECS::Index index)
    {
        delete this->data[index];
    }

} }