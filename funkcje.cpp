#include <iostream>
#include <string>
using namespace std;

double add(double a, double b)
{
    return a + b;
}

string formatDouble(double val) {
    char buf[10];
    snprintf(buf, sizeof(buf), "%.1f", val);
    return string(buf);
}

int main()
{
    double a = 1.1, b = 3.2, c;

    c = add(a,b);

    string text = to_string(a) + " + " + to_string(b) + " = " + to_string(c);

    string text1 = formatDouble(a) + " + " + formatDouble(b) + " = " + formatDouble(c);

    cout << "a + b = " << c << endl;
    cout << a << " + " << b << " = " << c << endl;
    cout << text << endl;
    cout << text1 << endl;

    return 0;
}