#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <vector>

namespace app {

std::string trim(const std::string& s);
std::string toLower(const std::string& s);
std::vector<std::string> splitWhitespace(const std::string& s);

}

#endif
