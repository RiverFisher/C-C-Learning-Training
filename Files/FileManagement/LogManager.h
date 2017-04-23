#ifndef INFILESTORAGE_LOGMANAGER_H
#define INFILESTORAGE_LOGMANAGER_H


class LogManager {
public:
    static LogManager& instance();
    void print(std::string);
    void writeToFile(std::string);

protected:
    static LogManager Instance;

private:
    LogManager();
    ~LogManager();
};


#endif //INFILESTORAGE_LOGMANAGER_H