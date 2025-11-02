#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cin.ignore();

    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        string str;
        getline(cin, str);

        if (str.substr(0, 4) == "push")
        {
            int X = stoi(str.substr(5));
            v.push_back(X);
        }
        else if (str == "pop")
        {
            if (v.empty())
                cout << "-1\n";
            else
            {
                cout << v.back() << "\n";
                v.pop_back();
            }
        }
        else if (str == "size")
        {
            cout << v.size() << "\n";
        }
        else if (str == "empty")
        {
            cout << v.empty() << "\n";
        }
        else if (str == "top")
        {
            if (v.empty())
                cout << "-1\n";
            else
            {
                cout << v.back() << "\n";
            }
        }
    }
}