#include <iostream>

void compute() {
    int static internalCounter = 0; // Local variable
    internalCounter++;
    std::cout << "Internal counter: " << internalCounter << std::endl;
}

int main() {
    compute();
    compute();
    // std::cout << internalCounter; // Error: internalCounter is out of scope here
    return 0;
}