#include <iostream>
using namespace std;

int main()
{
    // 변수
    int N;
    int size[6] = {};
    int T, P;

    // 입력
    cin >> N;
    for (int i = 0; i < 6; i++)
    {
        cin >> size[i];
    }
    cin >> T >> P;

    // 출력
    int tcnt = 0;
    for (int i = 0; i < 6; i++)
    {
        int t = size[i] / T;

        if (size[i] % T == 0)
            tcnt += t;
        else
            tcnt += t + 1;
    }
    cout << tcnt << '\n';
    cout << N / P << ' ' << N % P;
}

/* 다른 풀이
#include <iostream>
using namespace std;

int main()
{
    int N, T, P, s[6], cnt = 0;

    cin >> N;

    for (int i = 0; i < 6; i++)
        cin >> s[i];

    cin >> T >> P;

    for (int i = 0; i < 6; i++)
        cnt += (s[i] / T + (s[i] % T > 0)); <- bool로 처리

    cout << cnt << '\n' << N / P << " " << N % P << '\n';

    return 0;
}
*/