#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        string testCase;
        cin >> testCase;

        if (testCase == "0")
            break;

        string palindrome = "no\n";

        /*
        <algorithm>을 사용
        string str = testCase;
        reverse(str.begin(), str.end());
        */

        string str = "";

        for (int j = testCase.length() - 1; j >= 0; j--)
        {
            str += testCase[j];
        }

        if (testCase == str)
            palindrome = "yes\n";

        cout << palindrome;
    }
}