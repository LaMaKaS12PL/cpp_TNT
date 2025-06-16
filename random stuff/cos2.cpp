#include <iostream>

class ludziki {
private:
    std::string imie;
    int wiek;

public:
    Osoba() {
        imie = "Bez imienia";
        wiek = 0;
    }

    Osoba(std::string imie, int wiek) : imie(imie), wiek(wiek) {}

    void wyswietlDane() {
        std::cout << "Imie: " << imie << ", Wiek: " << wiek << std::endl;
    }
};

int main() {
    Osoba osoba1;
    osoba1.wyswietlDane();

    Osoba osoba2("Jan", 30);
    osoba2.wyswietlDane();

    return 0;
}