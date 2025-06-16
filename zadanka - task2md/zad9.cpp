#include <iostream>
#include <vector>
using namespace std;

int main() { // int main XD
    int n; // deklaracja
    cout << "Podaj ilość liczb: "; // pdanie liczb
    cin >> n; // wyczystanie

    vector<int> liczby;  // vector liczb

    // wczytanie n
    for (int i = 0; i < n; i++) {
        int liczba;
        cout << "Podaj liczbę #" << (i + 1) << ": "; // podanie liczby
        cin >> liczba;
        liczby.push_back(liczba); // dodanie liczby do vectora
    }

    cout << "Liczby w odwrotnej kolejności (metoda 1): "; // wyswietlenie odwrotnej kolejnosci
    for (int i = n - 1; i >= 0; i--) { // petla for
        cout << liczby[i] << " ";
    }
    cout << endl;

    return 0; // kniec
}
