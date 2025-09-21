#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        int sum = i;
        int res = i;
        while (sum != 0)
        {
            res += sum % 10;
            sum /= 10;
        }
        if (res == N)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}

// 자릿수 더하기
// 10으로 나눈 나머지 더하고 몫으로 값 줄여나가기