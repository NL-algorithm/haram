#include <iostream>
using namespace std;

int main()
{
    int N;
    int num, cnt = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (num == 1)
            continue;
        int isPrime = 1;
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
                isPrime = 0;
        }
        if (isPrime == 1)
            cnt++;
    }

    cout << cnt;

    return 0;
}