#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    cout << "Enter the first number:\n ";
    cin >> a;
    cout << "Enter the second number:\n ";
    cin >> b;
    cout << "The maximum number is " << max(a, b);
    return 0;
}
