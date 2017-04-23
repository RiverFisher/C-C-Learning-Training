#include "LogManager.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

LogManager LogManager::Instance;

LogManager& LogManager::instance() {
    return Instance;
}

LogManager::LogManager() {
    cout << "Create instance of LogManager class...\n";
}

LogManager::~LogManager() {
    cout << "Destruct instance of LogManager class...\n";
}

void LogManager::print(std::string txt) {
    cout << "LogManager method void print(" << txt << ")...\n";
}

void LogManager::writeToFile(std::string message) {
    ofstream fout("data.txt", ios_base::app);
    fout.open("data.txt", ios_base::app);
    if (!fout.is_open()) {
        cout << "Файл не может быть открыт или создан\n"; // напечатать соответствующее сообщение
        return 1; // выполнить выход из программы
    }
    fout << message;
}