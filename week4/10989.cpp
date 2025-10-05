#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int input[10001] = {};

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        input[num] += 1;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < input[i]; j++) {
            cout << i << '\n';
        }
    }
}

// vector, algorithm sort() 이용하면 N이 10,000,000 이하이므로 메모리 초과