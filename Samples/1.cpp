#include <string>
#include <cstdio>

#include "../HxECS.hpp"

class Position: public HxECS::Component
{
    public:
        using Storage = HxECS::Storage::UnorderedMapStorage<Position>;

        unsigned int x;
        unsigned int y;
};

int main()
{
    HxECS::World world;
    world.Register<Position>();

    Position position;
    position.x = 0;
    position.y = 0;
    return 0;
}