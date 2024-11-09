#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int prime = 1;
    if (n <= 1)
        prime = 0;
    else
    {
        for (int i = 2; (i * i) <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
        cout << "prime!";
    else
        cout << "Not Prime!";

    return 0;
}