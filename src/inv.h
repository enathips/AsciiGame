#ifndef INV_H
#define INV_H

#include <vector>

#include "item.h"

class Inv {
    public:
        std::vector<Item> items;

        Inv();
};

#endif // INV_H

