#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct member
{
    int age, idx;
    string name;
};

bool compare(const member &a, const member &b)
{
    if (a.age == b.age)
        return a.idx < b.idx;
    return a.age < b.age;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    member judge[100001];

    for (int i = 0; i < N; i++)
    {
        cin >> judge[i].age >> judge[i].name;
        judge[i].idx = i;
    }

    sort(judge, judge + N, compare);

    for (int i = 0; i < N; i++)
    {
        cout << judge[i].age << " " << judge[i].name << '\n';
    }

    return 0;
}