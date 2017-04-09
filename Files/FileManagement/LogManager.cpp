#include "LogManager.h"
#include <string>
#include <fstream>
#include <iostream>

//LogManager * LogManager::p_instance = 0;

LogManager& LogManager::getInstance() {
    static LogManager s;
    return s;
}

void writeToFile(string message) {
    FILE * file;
    ofstream file("Logs.txt");

    if (!file.is_open()) {
        cout << "Файл не может быть открыт или создан\n"; // напечатать соответствующее сообщение
        return 1; // выполнить выход из программы
    }

    file << message << endl;
    file.close();
}