#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int gcd = 1;
    int lcm = 0;

    for (int i = 2; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = a * b / gcd;

    cout << gcd << '\n'
         << lcm;
}