#include <iostream>

int main() {
    std::cout << "Welcome to the Game!" << std::endl;

    // Game initialization code goes here

    bool isRunning = true;
    while (isRunning) {
        // Main game loop code goes here

        // For demonstration, we'll just exit the loop after one iteration
        isRunning = false;
    }

    std::cout << "Exiting the Game." << std::endl;
    return 0;
}

//TODO: Implement engine loop ie reading input updating state rendering output