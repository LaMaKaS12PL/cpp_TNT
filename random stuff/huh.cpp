#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{

private:
    string _imie;
    int _wiek;

public:
    Student(int wiek, string imie)
    {
        _wiek = wiek;
        _imie = imie;
    }

    void print()
    {
        cout << _imie << " " << _wiek << endl;
    }
};

int main()
{
    Student s1("Ala", 25);
    Student s2("Ola", 30);

    vector<Student> ListaStudentow;
    ListaStudentow.push_back(s1);
    ListaStudentow.push_back(s2);

    for (auto& s : ListaStudentow) {
        s.print();
    }
}