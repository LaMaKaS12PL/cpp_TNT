#include <iostream>   
using namespace std;  

// definicja klasy
class Punkt2D {
public:         // publiczna czesc
    float x;    // xmienna x
    float y;    // Zzmienna y

    // konstruktoer
    Punkt2D(float wspX, float wspY) {
        x = wspX;    // przypisanie x
        y = wspY;    // przypiosanie y
    }

    // metoda wyswietlajaca
    void wyswietl() {
        cout << "Punkt ma współrzędne: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // tworzenie obiektu z klasy
    Punkt2D p1(3.5, 7.2);

    // wywolkanie metody 
    p1.wyswietl();

    return 0; // zakonczenie
}
