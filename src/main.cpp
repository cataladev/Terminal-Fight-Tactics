#include "app/App.h"
#include <iostream>

int main() {
    app::App app;
    app.run();
    std::cout << "Goodbye." << std::endl;
    return 0;
}
