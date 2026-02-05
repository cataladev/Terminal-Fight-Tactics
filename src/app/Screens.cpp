#include "app/Screens.h"
#include "game/GameState.h"
#include <sstream>

namespace app {

std::string renderMainMenu(const game::GameState& /*state*/) {
    std::ostringstream out;
    out << "=== Terminal Fight Tactics ===" << "\n\n"
        << "1. Start / Play" << "\n"
        << "2. Help" << "\n"
        << "3. Quit" << "\n\n"
        << "> ";
    return out.str();
}

std::string renderHelp(const game::GameState& /*state*/) {
    std::ostringstream out;
    out << "--- Help ---" << "\n"
        << "Commands: start (1), help (2), quit (3), back (b)" << "\n\n"
        << "> ";
    return out.str();
}

std::string renderGame(const game::GameState& state) {
    std::ostringstream out;
    out << "--- Game ---" << "\n"
        << "Round: " << state.round << "  Gold: " << state.gold << "\n"
        << "Commands: end (e), back (b)" << "\n\n"
        << "> ";
    return out.str();
}

}
