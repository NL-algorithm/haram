#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int num[10] = {};
    set<int> res;

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        res.insert(num[i] % 42);
    }

    cout << res.size();
}