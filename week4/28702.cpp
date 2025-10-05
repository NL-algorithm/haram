#include <iostream>
using namespace std;

// 숫자가 아닌 문자열이 3연속으로 나올 수 없음
// -> 3개의 입력 중 숫자를 찾아 출력값 계산

int main()
{
    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;

        if (str[0] == 'F' || str[0] == 'B')
            continue;

        int num = stoi(str) + 3 - i;

        if (num % 3 && num % 5)
        {
            cout << num;
        }
        else
        {
            if (num % 3 == 0)
            {
                cout << "Fizz";
            }

            if (num % 5 == 0)
            {
                cout << "Buzz";
            }
        }

        break;
    }
}