#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ISBN;
    cin >> ISBN;

    int sum = 0;
    int weight = 1;

    for (int i = 0; i < 13; i++)
    {
        if (ISBN[i] == '*')
        {
            if (i % 2 == 1)
                weight = 3;
            continue;
        }
        int num = ISBN[i] - '0';

        if (i % 2 == 1)
            sum += 3 * num;
        else
            sum += num;
    }

    
    int res = 0;
    for (int x = 0; x < 10; x++)
    {
        if ((sum + x * weight) % 10 == 0)
        {
            res = x;
            break;
        }
    }

    cout << res;
}