#include <iostream>
using namespace std;

int main()
{
    int t;
    int h, w, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;

        int floor = (n - 1) % h + 1;
        int room = 1 + ((n - 1) / h);
        cout << floor * 100 + room << '\n';
    }
}