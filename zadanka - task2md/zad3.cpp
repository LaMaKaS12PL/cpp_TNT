#include <iostream>
using namespace std;

// rekurncja
int silnia(int n) {
    // warujnek zakomczenua
    if (n <= 1) {
        return 1;
    }
    // wywolanie rekurencji
    return n * silnia(n - 1);
}

int main() {
    int liczba; // deklaracja 

    cout << "Podaj liczbę całkowitą: "; // podanie liczby
    cin >> liczba; // wczytanie liczby

    if (liczba < 0) { // ssprawdzenie czy ujemna
        cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl; // komunikat o bledzie
    } else {
        cout << "Silnia z " << liczba << " wynosi: " << silnia(liczba) << endl; // wyswietlenie wyniku
    }

    return 0; // zakonczenie
}
