#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<double> score(N);
    int maxScore = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
        if (maxScore < score[i])
            maxScore = score[i];
    }

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        score[i] = score[i] / maxScore * 100;
        sum += score[i];
    }
    cout << sum / N;
}