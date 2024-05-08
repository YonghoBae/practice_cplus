#include<iostream>
#include<vector>
#include<queue>
#define INF 1000000000
using namespace std;

struct Edge {
    int dest;
    int weight;
};

void Dijkstra(int start, int V, vector<vector<Edge>>& adj) {
    // 거리 배열 초기화
    vector<int> dist(V, INF);
    
    // 시작 노드의 거리는 0으로 설정
    dist[start] = 0;

    // 우선순위 큐를 사용하여 최소 거리 노드 선택
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int current_node = pq.top().second;
        int current_dist = pq.top().first;
        pq.pop();

        // 이미 최단 거리를 구한 노드인 경우 스킵
        if (current_dist > dist[current_node]) {
            continue;
        }

        // 현재 노드에서 갈 수 있는 모든 노드들을 탐색
        for (const Edge& edge : adj[current_node]) {
            int next_node = edge.dest;
            int weight = edge.weight;

            // 다음 노드까지의 거리가 현재까지의 거리 + 현재 노드에서 다음 노드까지의 가중치보다 작으면 갱신
            if (dist[next_node] > dist[current_node] + weight) {
                dist[next_node] = dist[current_node] + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < V; ++i) {
        if (dist[i] == INF) {
            cout << "INF" << "\n";
        } else {
            cout << dist[i] << "\n";
        }
    }
}

int main() {
    int V, E, K, u, v, w;
    cin >> V >> E; // 정점의 개수 V, 간선의 개수 E 입력
    cin >> K;      // 시작 정점 입력

    // 인접 리스트 초기화
    vector<vector<Edge>> adj(V);

    // 간선 정보 입력
    for(int i = 0; i < E; ++i) {
        cin >> u >> v >> w;
        adj[u - 1].push_back({v - 1, w});
    }

    // 다익스트라 알고리즘 호출
    Dijkstra(K - 1, V, adj);

    return 0;
}
