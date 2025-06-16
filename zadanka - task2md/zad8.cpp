#include <iostream>    
#include <vector>      
using namespace std;  

int main() {
    vector<int> liczby;  // pusty vector
    int liczba;          // pomocnicza zmienna

    // petla wypisuje liczby az bedzie 0 
    while (true) {
        cout << "Podaj liczbę (0 kończy): ";
        cin >> liczba;

        if (liczba == 0) {
            break;  // pprzewanie petli jak 0
        }

        liczby.push_back(liczba);  // dodanie liczby na koneic vectora
    }

    int suma = 0;  // przechowanie sumy

    // petla for
    for (int x : liczby) {
        suma += x;  // dodanie kazdego elementu
    }

    // wyswietleniue
    cout << "Suma elementów: " << suma << endl;

    return 0; //koniueec
}
