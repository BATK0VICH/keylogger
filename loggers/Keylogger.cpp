#include "Keylogger.hpp"

Keylogger::Keylogger(const size_t limit) :
    customLimit(limit) {
    this->loggedCharacters = new std::vector<char>();
}

void Keylogger::start() {
    if (loggedCharacters->size() >= this->customLimit) {
        this->pause();
        this->saveFile("test", "txt");
        this->continueLogging();
    }
}
void Keylogger::pause() {

}

void Keylogger::saveFile(const std::string fileName, const std::string fileFormat) {

}

void Keylogger::continueLogging() {

}

Keylogger::~Keylogger() {
}