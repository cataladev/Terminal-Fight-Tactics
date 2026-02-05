#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <vector>

namespace app {

enum class CommandType { Unknown, Quit, Start, Help, Back, End };

struct Command {
    CommandType type;
    std::vector<std::string> args;
};

Command parseCommand(const std::string& line);

}

#endif
