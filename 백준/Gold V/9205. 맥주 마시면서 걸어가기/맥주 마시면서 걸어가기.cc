#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int getDistance(pair<int, int> a, pair<int, int> b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}

string bfs(vector<pair<int, int>> &points)
{
    vector<bool> visited(points.size(), false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        if (current == points.size() - 1)
            return "happy";

        for (int i = 1; i < points.size(); ++i)
        {
            if (!visited[i] && getDistance(points[current], points[i]) <= 1000)
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    return "sad";
}

int main()
{
    int t,a=0;
    cin >> t;
    vector<string> result(t);
    for(int j=0;j<t;j++)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n + 2);
        for (int i = 0; i < n + 2; ++i)
        {
            cin >> points[i].first >> points[i].second;
        }
        result[j] = bfs(points);
    }

    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}