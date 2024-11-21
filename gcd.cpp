//Euclid’s Algorithm for GCD
#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin >> num1;
    cin >> num2;
    while (num2 != 0)
    {
        int remainder;
        remainder = (num1 % num2);
        num1 = num2;
        num2 = remainder;
    }
    cout << num1;
    return 0;
}