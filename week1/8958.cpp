#include <iostream>
using namespace std;

int main()
{
    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string quiz = {};
        int cnt = 1;
        int score = 0;
        cin >> quiz;

        for (int j = 0; j < quiz.size(); j++)
        {
            if (quiz[j] == 'O')
            {
                score += cnt;
                cnt++;
            }
            else
            {
                cnt = 1;
            }
        }
        cout << score << '\n';
    }
}