#include <iostream>
#include <vector>
#include <string> // string

class Student { // klasa student
private: // private
    std::string _imie; // imie zmienna
    int _wiek; // wiek zmienna

public: // public
    Student(std::string imie, int wiek) : _imie(imie), _wiek(wiek) // konstruktor
    {
    }

    void print() const { // print
        std::cout << _imie << " " << _wiek << std::endl; // wyswietlenie imienia i wieku
    }
};

int main() { // main
    Student s1("Ala", 25); // student 1
    Student s2("Antek", 20); // student 2

    std::vector<Student> ListaStudentow; // vector studentow

    ListaStudentow.push_back(s1); // dodanie studenta 1
    ListaStudentow.push_back(s2); // dodanie studenta 2

    for (const auto& s : ListaStudentow) { // petla for dla kazdeo studenta
        s.print();
    }

    return 0; // kniec
}