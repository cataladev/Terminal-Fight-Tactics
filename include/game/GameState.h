#ifndef GAMESTATE_H
#define GAMESTATE_H

namespace game {

enum class Screen { MainMenu, Help, Game };

struct GameState {
    bool running = true;
    Screen screen = Screen::MainMenu;
    int round = 1;
    int gold = 0;
};

}

#endif
