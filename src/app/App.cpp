#include "app/App.h"
#include "app/Commands.h"
#include "app/Screens.h"
#include "game/GameState.h"
#include <iostream>
#include <string>

namespace app {

void App::run() {
    while (state_.running) {
        render();
        std::string line;
        if (!std::getline(std::cin, line)) {
            state_.running = false;
            break;
        }
        Command cmd = parseCommand(line);
        update(cmd);
    }
}

void App::render() const {
    switch (state_.screen) {
        case game::Screen::MainMenu:
            std::cout << renderMainMenu(state_);
            break;
        case game::Screen::Help:
            std::cout << renderHelp(state_);
            break;
        case game::Screen::Game:
            std::cout << renderGame(state_);
            break;
    }
    std::cout.flush();
}

void App::update(const Command& cmd) {
    switch (cmd.type) {
        case CommandType::Quit:
            state_.running = false;
            break;
        case CommandType::Start:
            state_.screen = game::Screen::Game;
            break;
        case CommandType::Help:
            state_.screen = game::Screen::Help;
            break;
        case CommandType::Back:
            state_.screen = game::Screen::MainMenu;
            break;
        case CommandType::End:
            if (state_.screen == game::Screen::Game) {
                state_.round++;
                state_.gold++;
                state_.screen = game::Screen::MainMenu;
            }
            break;
        case CommandType::Unknown:
            break;
    }
}

}
