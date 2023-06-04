#ifndef WORLD_H
#define WORLD_H

#include <vector>

#include "cell.h"

class World {
    public:
        std::vector<std::vector<Cell>> matrix;

        World();
};

#endif // WORLD_H

