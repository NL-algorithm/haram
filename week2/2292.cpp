#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 0;
    int res = 1;

    while (res < N)
    {
        i++;
        res += 6 * i;
    }

    cout << i + 1;
    return 0;
}