#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> basket(N + 1);

    for (int a = 0; a < M; a++)
    {
        int i, j, k;
        cin >> i >> j >> k;

        for (int num = i; num <= j; num++)
        {
            basket[num] = k;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << basket[i] << ' ';
    }
}