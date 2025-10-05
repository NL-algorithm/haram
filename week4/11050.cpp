#include <iostream>
using namespace std;

int binomial(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    if (0 < k && k < n)
        return (binomial(n - 1, k - 1) + binomial(n - 1, k));
}

int main()
{
    int N, K;
    cin >> N >> K;

    cout << binomial(N, K);
}