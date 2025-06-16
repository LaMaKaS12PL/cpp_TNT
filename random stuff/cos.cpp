#include <iostream>

class A {
public:
    A() {
        std::cout << "Konstruktor" << std::endl;
    }

    ~A() {
        std::cout << "Destruktor" << std::endl;
    }
};

int main() {
    A obj;
    return 0;
}