#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

class Statystyka {
private:
    vector<float> dane;

    // Prywatna funkcja pomocnicza: sortuje dane
    void sortujDane() {
        sort(dane.begin(), dane.end());
    }

public:
    // Konstruktor – inicjalizacja danymi
    Statystyka(const vector<float>& wejscie) {
        dane = wejscie;
    }

    float srednia() {
        if (dane.empty()) return 0;
        float suma = accumulate(dane.begin(), dane.end(), 0.0f);
        return suma / dane.size();
    }

    float odchylenieStandardowe() {
        if (dane.empty()) return 0;
        float avg = srednia();
        float suma = 0.0f;
        for (float x : dane) {
            suma += (x - avg) * (x - avg);
        }
        return sqrt(suma / dane.size());
    }

    float mediana() {
        if (dane.empty()) return 0;
        sortujDane();  // sortowanie przed obliczeniem mediany
        size_t n = dane.size();
        if (n % 2 == 0) {
            return (dane[n/2 - 1] + dane[n/2]) / 2.0f;
        } else {
            return dane[n/2];
        }
    }
};

int main() {
    vector<float> pomiary;
    float wartosc;

    cout << "Podaj dane pomiarowe (temperatury). Wpisz 'q' aby zakonczyc:\n";

    while (cin >> wartosc) {
        pomiary.push_back(wartosc);
    }

    // Czyszczenie strumienia po błędzie (np. wpisaniu 'q')
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (pomiary.empty()) {
        cout << "Nie podano zadnych danych." << endl;
        return 1;
    }

    Statystyka stat(pomiary);

    cout << "\n--- Wyniki analizy ---" << endl;
    cout << "Srednia: " << stat.srednia() << endl;
    cout << "Odchylenie standardowe: " << stat.odchylenieStandardowe() << endl;
    cout << "Mediana: " << stat.mediana() << endl;

    return 0;
}