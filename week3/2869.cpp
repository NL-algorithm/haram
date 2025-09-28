#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, V;
    cin >> A >> B >> V;

    int cnt = (V - A) / (A - B) + 1;

    if ((V - A) % (A - B) == 0)
        cout << cnt;
    else
        cout << cnt + 1;
}