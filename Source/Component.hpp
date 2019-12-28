#include <cstdio>

#pragma once

namespace HxECS{

    class Component
    {
        using Storage = HxECS::Storage::UnorderedMapStorage<Component>;
        
        protected:
            unsigned int id;
        public:
            bool operator ==(const Component ref) const
            {
                return this->id == ref.id;
            }
    };
}