#ifndef INFILESTORAGE_LOGMANAGER_H
#define INFILESTORAGE_LOGMANAGER_H


#include <string>


class LogManager {
public:
    static LogManager& getInstance();
    void writeToFile(std::string);
private:
    LogManager() { }
    LogManager( LogManager const& ) = delete;
    ~LogManager() { }
    LogManager& operator=( LogManager const& ) = delete;
//    static LogManager* p_instance;
};


#endif //INFILESTORAGE_LOGMANAGER_H
