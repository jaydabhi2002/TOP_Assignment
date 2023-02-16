#include <iostream>
using namespace std;
int main()
{
    // variable
    int x, y;
    int add, sub, mult, div;

    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;

    // addition
    add = x + y;
    // subtraction
    sub = x - y;
    // multiplication
    mult = x * y;
    // division
    div = (float)x / y;

    cout << "\naddition = " << add;
    cout << "\nsubtraction  = " << sub;
    cout << "\nMultiplication = " << mult;
    cout << "\nDivision = " << div;

    return 0;
}
