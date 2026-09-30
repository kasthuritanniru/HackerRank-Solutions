#include <stdio.h>
#include <string.h>
#include <limits.h>
int graph[101][101];
int parent[101];
int bfs(int V, int source, int sink)
{
    int queue[101];
    int front = 0, rear = 0;
    int visited[101] = {0};
    queue[rear++] = source;
    visited[source] = 1;
    parent[source] = -1;
    while (front < rear)
    {
        int u = queue[front++];
        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] > 0)
            {
                visited[v] = 1;
                parent[v] = u;
                queue[rear++] = v;
                if (v == sink)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int V, E;
    scanf("%d %d", &V, &E);
    memset(graph, 0, sizeof(graph));
    for (int i = 0; i < E; i++)
    {
        int u, v, cap;
        scanf("%d %d %d", &u, &v, &cap);
        graph[u][v] += cap;
    }
    int maxFlow = 0;
    int source = 0;
    int sink = V - 1;
    while (bfs(V, source, sink))
    {
        int pathFlow = INT_MAX;
        for (int v = sink; v != source; v = parent[v])
        {
            int u = parent[v];
            if (graph[u][v] < pathFlow)
            {
                pathFlow = graph[u][v];
            }
        }
        for (int v = sink; v != source; v = parent[v])
        {
            int u = parent[v];
            graph[u][v] -= pathFlow;
            graph[v][u] += pathFlow;
        }
        maxFlow += pathFlow;
    }
    printf("%d", maxFlow);
    return 0;
}
