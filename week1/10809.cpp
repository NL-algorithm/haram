#include <iostream>
using namespace std;

int main()
{
    string S = {};
    int res[26] = {};

    cin >> S;

    for (int i = 0; i < 26; i++)
    {
        res[i] = -1;
        for (int j = 0; j < S.size(); j++)
        {
            if (S[j] - 'a' == i && res[i] == -1)
            {
                res[i] = j;
            }
        }
        cout << res[i] << ' ';
    }
}