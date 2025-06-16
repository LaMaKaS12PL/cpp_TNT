#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::string _imie;
    int _wiek;

public:
    Student(std::string imie, int wiek) : _imie(imie), _wiek(wiek) 
    {
    }

    void print() const {
        std::cout << _imie << " " << _wiek << std::endl;
    }
};

int main() {
    Student s1("Ala", 25);
    Student s2("Antek", 20);

    std::vector<Student> ListaStudentow;

    ListaStudentow.push_back(s1);
    ListaStudentow.push_back(s2);

    for (const auto& s : ListaStudentow) {
        s.print();
    }

    return 0;
}