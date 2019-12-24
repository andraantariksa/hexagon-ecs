#include <string>

#include "ECS.hpp"

class Human: HxECS::Component
{
    public:
        std::string name;
        unsigned int age;
};

int main()
{
    
    return 0;
}