#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    int num[100001];
    int find;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    sort(num, num + N);

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> find;
        cout << binary_search(num, num + N, find) << "\n";
    }
}