#ifndef ANALYZEFILE_HPP
#define ANALYZEFILE_HPP

#include "klasa.hpp"

class AnalyzedFile : File
{
public:
    int countWords();

    int countOccurrences(const std::string &word);

    int countFileLines();

    void toUpperCase();

    void toLowerCase();

    void showStats();
};

#endif