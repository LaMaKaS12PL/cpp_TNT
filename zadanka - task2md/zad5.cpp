#include <iostream> 
using namespace std; 

// definicja klasy licznik
class Licznik {
private:          // private 
    int wartosc;  // zmienna przechowujaca wartosc licznika

public:           // publiczna czesc

    // konstruktor ustawiajacy wartosc na 0
    Licznik() {
        wartosc = 0;
    }

    // zwiekszajaca wartosc o 1
    void zwieksz() {
        wartosc++;
    }

    // zmniejsza wartosc o 1
    void zmniejsz() {
        wartosc--;
    }

    // zwraca aktualna wartosc licznika
    int pobierzWartosc() {
        return wartosc;
    }
};

int main() {
    Licznik licznik;  // klasa licznik

    // zwiekszanie 2 razy
    licznik.zwieksz();
    licznik.zwieksz();

    // zmniejszanie licznika raz
    licznik.zmniejsz();

    // wyswietlenie aktualnej wartosci 
    cout << "Aktualna wartość licznika: " << licznik.pobierzWartosc() << endl;

    return 0; // zakonczeniue
}
