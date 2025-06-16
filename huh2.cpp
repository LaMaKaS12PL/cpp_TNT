#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
public:
    Student(string imie, int wiek) : imie_(imie), wiek_(wiek) {}

    string getImie() const
    {
        return imie_;
    }

    int getWiek() const
    {
        return wiek_;
    }

    void przedstawSie() const
    {
        cout << "Student: " << imie_ << ", wiek: " << wiek_ << endl;
    }

private:
    string imie_;
    int wiek_;
};

int main()
{
    Student student1("Jan Kowalski", 20);
    Student student2("Anna Nowak", 22);
    Student student3("Piotr Wiśniewski", 21);

    student1.przedstawSie();
    student2.przedstawSie();
    student3.przedstawSie();

    return 0;
}

return 0;
}