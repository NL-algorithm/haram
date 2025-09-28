#include <iostream>
using namespace std;

void floor()
{
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int k, n;
        cin >> k >> n;

        int apt[15][15] = {};

        for (int i = 0; i <= 14; i++)
        {
            apt[0][i] = i;
        }

        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
            }
        }

        cout << apt[k][n] << '\n';
    }
}

/*
apt[k][n] = apt[k][n-1] + apt[k-1][n]
*/