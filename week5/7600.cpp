#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        string str;
        int res[128] = {0};
        int num = 0;

        getline(cin, str);

        if (str == "#")
            break;

        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
            res[str[i]] = 1;
        }

        for (int i = 97; i < 123; i++)
        {
            if (res[i] == 1)
                num++;
        }

        cout << num << '\n';
    }
}