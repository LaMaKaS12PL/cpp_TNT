#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& text) {
    istringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int countBits(const string& text) {
    return text.size() * 8;
}

int main() {
    string text;

    cout << "Podaj tekst: ";
    getline(cin, text);

    int words = countWords(text);
    int bits = countBits(text);

    cout << "Liczba slow: " << words << endl;
    cout << "Liczba bitow: " << bits << endl;

    return 0;
}