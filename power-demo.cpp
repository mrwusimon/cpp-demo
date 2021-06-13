#include <iostream>
// #include <cmath>
using namespace std;

double power(double base, int exponent)
{

    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}

void print_power(double base, int exponent)
{

    double myPower = power(base, exponent);
    cout << base <<" " << "rasied to the" <<" " << exponent << ":"
         << "the result is: " << myPower << endl;
}

int main()
{
    double base;
    int exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    print_power(base, exponent);
    print_power(10, 3);
    print_power(2, 5);
}