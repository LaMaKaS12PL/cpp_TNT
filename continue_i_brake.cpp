#include <iostream>
using namespace std;    

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "koniec petli" << endl;
            break; // koniec petli gdy 5
        }
    }
    // teraz petla z continue
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "teraz pominie 5" << endl;
            continue; // pomija int = 5
        }
    }
    

}