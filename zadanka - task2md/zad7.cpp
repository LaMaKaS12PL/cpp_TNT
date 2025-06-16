#include <iostream>  
using namespace std; 

int main() {
    // tablica z 5 elementow
    int liczby[] = {4, 2, 9, 1, 7};

    // zalozenie ze pierwszy elemenr jets najwiekszuy
    int maks = liczby[0];

    // petla przechidzi przez wsztskie elementy w tablicy
    for (int i = 1; i < 5; i++) {
        // jak element jest wiekszy od pierwszego maxa
        if (liczby[i] > maks) {
            maks = liczby[i];  // zapisuje najwieksza wartos
        }
    }

    // wyswietlenie maxa
    cout << "Największy element w tablicy to: " << maks << endl;

    return 0; //konieeeec
}
