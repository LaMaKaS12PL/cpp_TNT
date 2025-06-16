#include <iostream>   
using namespace std;  

int main() {
    int oceny[5];        // tablica porzechowujaca 5 elementow
    int suma = 0;        // zmienna do przechwania sumy

    // petla wczytująca 5 ocen
    for (int i = 0; i < 5; i++) {
        cout << "Podaj ocenę #" << (i + 1) << ": ";  // podawanie ocen
        cin >> oceny[i];                             // wrzucenie do tablicy
        suma += oceny[i];                            // suma ocen
    }

    // obliczanie sredniej 
    float srednia = suma / 5.0;  // dzielenie zmiennoprzecinkowe

    // wyswietlenie sredniej 
    cout << "Średnia ocen wynosi: " << srednia << endl;

    return 0; // qniec
}
