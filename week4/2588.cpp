#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int sum = 0;
    int n3 = 0;
    int res = n1 * n2;

    for (int i = 0; i < 3; i++)
    {
        n3 = n1 * (n2 % 10);
        cout << n3 << '\n';
        n2 /= 10;
    }

    cout << res;
}