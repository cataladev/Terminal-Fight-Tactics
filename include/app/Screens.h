#ifndef SCREENS_H
#define SCREENS_H

#include <string>

namespace game {
struct GameState;
}

namespace app {

std::string renderMainMenu(const game::GameState& state);
std::string renderHelp(const game::GameState& state);
std::string renderGame(const game::GameState& state);

}

#endif 
