#pragma once

namespace HxECS
{

    class System
    {
        protected:
            virtual void run() = 0;
    };

}