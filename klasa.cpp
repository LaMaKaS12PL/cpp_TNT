#include <iostream>
#include <string>
using namespace std;

class a {
private:
    int prywatnyInt;
    string prywatnyString;

protected:
    int protectedInt;

public:
    // konstruktor
    a(){
        cout << "konstruktor" << endl;
    }

    // destruktor
    ~a() {
        cout << "destruktor" << endl;
    }

};

int main() {
    return 0; 
}
