#include <iostream>

class Log {
public:
    enum Level {
        LevelError = 0,
        LevelWarning = 1,
        LevelInfo = 2
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    }

    void Error(const char* message) {
        if (m_LogLevel >= LevelError)
            std::cout << "[Error]: " << message << std::endl;
    }

    void Warn(const char* message) {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[Warning]: " << message << std::endl;
    }

    void Info(const char* message) {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[Info]: " << message << std::endl;
    }
};

void LogTests() {
    Log log;
    log.SetLevel(Log::LevelError);
    log.Error("Error");
    log.Warn("Hello");
    log.Info("Test");
}