#include <iostream>  
using namespace std;  

// sprawdzanie parzstości
bool czyParzysta(int liczba) {
    // modulo
    // parzysta liczba jak ma zero jako reszte
    return liczba % 2 == 0;
}

int main() {
    int liczba;  // deklarowanie zmiennej

    // podanie liczby
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;  // wczytanie liczby

    // wywołanie funkcji
    if (czyParzysta(liczba)) {
        // jak zwroci true to jest parzysta
        cout << "Liczba jest parzysta." << endl;
    } else {
        // jak zwroci false to nieparzysta
        cout << "Liczba jest nieparzysta." << endl;
    }

    return 0;  // zakonczenie programu
}
