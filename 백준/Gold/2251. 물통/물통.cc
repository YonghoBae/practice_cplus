#include <iostream>
#include <queue>
#include <set>
using namespace std;

struct State {
    int a, b, c;
};

bool visited[201][201] = {false};
set<int> results;

void bfs(int A, int B, int C) {
    queue<State> q;
    q.push({0, 0, C});

    while (!q.empty()) {
        State current = q.front();
        q.pop();

        if (visited[current.a][current.b]) continue;
        visited[current.a][current.b] = true;

        if (current.a == 0) {
            results.insert(current.c);
        }

        // A -> B
        int move = min(current.a, B - current.b);
        q.push({current.a - move, current.b + move, current.c});

        // A -> C
        move = min(current.a, C - current.c);
        q.push({current.a - move, current.b, current.c + move});

        // B -> A
        move = min(current.b, A - current.a);
        q.push({current.a + move, current.b - move, current.c});

        // B -> C
        move = min(current.b, C - current.c);
        q.push({current.a, current.b - move, current.c + move});

        // C -> A
        move = min(current.c, A - current.a);
        q.push({current.a + move, current.b, current.c - move});

        // C -> B
        move = min(current.c, B - current.b);
        q.push({current.a, current.b + move, current.c - move});
    }
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bfs(A, B, C);

    for (int result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
