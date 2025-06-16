#include <iostream> 
using namespace std; 

int main() {
    float waga;      // deklaracja wagi floatem
    float wzrost;    // deklaracja wzrostu floatem
    float bmi;       // deklaracja bmi floatem

    // podanie wagi w kg
    cout << "Podaj swoją wagę (w kg): ";
    cin >> waga;  // odczyt wagi

    // podanie wzrostu w metrach
    cout << "Podaj swój wzrost (w metrach): ";
    cin >> wzrost;  // odczyt wzrostu 

    // obliczenie bmi
    bmi = waga / (wzrost * wzrost);

    // wyswiwtla wynik
    cout << "Twoje BMI wynosi: " << bmi << endl;

    return 0;  // zakonczenie i zwrocenie 0
}