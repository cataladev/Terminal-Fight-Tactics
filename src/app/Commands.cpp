#include "app/Commands.h"
#include "app/Util.h"

namespace app {

Command parseCommand(const std::string& line) {
    Command cmd;
    cmd.type = CommandType::Unknown;

    std::string normalized = toLower(trim(line));
    std::vector<std::string> tokens = splitWhitespace(normalized);

    if (tokens.empty()) return cmd;

    const std::string& first = tokens[0];

    if (first == "1" || first == "start" || first == "play") {
        cmd.type = CommandType::Start;
    } else if (first == "2" || first == "help" || first == "?") {
        cmd.type = CommandType::Help;
    } else if (first == "3" || first == "quit" || first == "exit") {
        cmd.type = CommandType::Quit;
    } else if (first == "back" || first == "b") {
        cmd.type = CommandType::Back;
    } else if (first == "end" || first == "e") {
        cmd.type = CommandType::End;
    }

    if (tokens.size() > 1) {
        cmd.args.assign(tokens.begin() + 1, tokens.end());
    }

    return cmd;
}

}
