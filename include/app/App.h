#ifndef APP_H
#define APP_H

#include "Commands.h"
#include "game/GameState.h"

namespace app {

class App {
public:
    void run();

private:
    game::GameState state_;
    void render() const;
    void update(const Command& cmd);
};

}

#endif
