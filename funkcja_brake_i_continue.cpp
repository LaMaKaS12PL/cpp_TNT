#include <iostream>
using namespace std;

// funkcja a z brake
void a() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "koniec petli" << endl;
            break; // koniec kiedy 5
        }
    }
}

// funkcja b z continue
void b() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "pomija 5" << endl;
            continue; // pomija int rowny 5
        } 
    }
}

int main() {
    cout << "funkcji a" << endl;
    a(); // wywolanie a
    cout << "funkcji b" << endl;
    b(); // wywoalanie b
    
    return 0;
}