#include "klasa.hpp"
#include "analizapliku.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class File {
public:
    File(const std::string& fileName) : _fileName(fileName) {}

    void saveFile() {
        std::ofstream MyFile(_fileName, std::ios::app);
        if (!MyFile) {
            std::cerr << "Błąd otwierania pliku do zapisu!" << std::endl;
            return;
        }

        MyFile << "Files can be tricky, but it is fun enough!\n";
        MyFile << "Ala ma kota\n";
        MyFile << "Ola ma kota\n";

        MyFile.close();
    }

    void readFile() {
        std::string line;
        std::ifstream MyReadFile(_fileName);
        if (!MyReadFile) {
            std::cerr << "Błąd otwierania pliku do odczytu!" << std::endl;
            return;
        }

        _lines.clear(); 
        while (getline(MyReadFile, line)) {
            _lines.push_back(line);
        }

        MyReadFile.close();
    }

    void showFile() {
        for (const auto& line : _lines) {
            std::cout << line << std::endl;
        }
    }

private:
    std::string _fileName;
    std::vector<std::string> _lines;
};