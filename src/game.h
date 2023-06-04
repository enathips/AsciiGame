#ifndef GAME_H
#define GAME_H

#include "player.h"

class Game {
    public:
        Player player;

        Game();
        void run();
};

#endif // GAME_H

