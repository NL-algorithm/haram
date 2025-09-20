#include <iostream>
#include <string>
using namespace std;

int main()
{
    int L;
    string str;
    cin >> L >> str;

    const long long MOD = 1234567891;
    long long H = 0;
    long long r = 1;

    for (int i = 0; i < L; i++)
    {
        int val = str[i] - 'a' + 1;
        H = (H + val * r) % MOD;
        r = (r * 31) % MOD;
    }

    cout << H;

    return 0;
}
