#include <iostream>
using namespace std;

int V, E;
const int MAX = 101;
int map[MAX][MAX] = {
    0,
};
bool visited[MAX] = {
    0,
};
int num = 0;

void DFS(int v)
{
    visited[v] = true;
    num++;

    for (int i = 1; i <= V; i++)
    {
        if (visited[i] == 0 && map[v][i] == 1)
        {
            DFS(i);
        }
    }
}

int main()
{
    cin >> V >> E;
    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    DFS(1);

    cout << num - 1;
}
