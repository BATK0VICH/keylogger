#include <vector>
#include <string>
#include <IOKit/hid/IOHIDValue.h>
#include <IOKit/hid/IOHIDManager.h>

class Keylogger {
private:
    const size_t customLimit;
    std::vector<char>* loggedCharacters;
    void pause();
    void saveFile(const std::string fileName, const std::string fileFormat);
    void continueLogging();
public:
    const static size_t DEFAULT_LIMIT = 5000;

    Keylogger(const size_t limit);
    void start();
    void stop();
    ~Keylogger();
};