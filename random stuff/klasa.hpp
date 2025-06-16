#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class File
{
protected:
    std::string _fileName;
    std::vector<std::string> _lines;

public:
    File(std::string argFileName) : _fileName(argFileName) {}

    void saveFile(); //  ----> Deklaracja metody saveFile
    
    void readFile(); //  ----> Deklaracja metoda readFile
    
    void showFile(); //  ----> Deklaracja metody showFile()

    
};

#endif