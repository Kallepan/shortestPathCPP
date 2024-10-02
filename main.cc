#include <iostream>

#define N 8
#define INF INT_MAX

int shortestDistance(int graph[N][N])
{
    int dist[N];

    dist[N - 1] = 0;

    for (int i = N - 2; i >= 0; i--)
    {
        dist[i] = INF;

        for (int j = i; j < N; j++)
        {
            if (graph[i][j] == INF)
                continue;

            dist[i] = std::min(dist[i], graph[i][j] + dist[j]);
        }
    }

    return dist[0];
}

// driver code
int main()
{
    // Graph stored in the form of an
    // adjacency Matrix
    int graph[N][N] =
        {{INF, 1, 2, 5, INF, INF, INF, INF},
         {INF, INF, INF, INF, 4, 11, INF, INF},
         {INF, INF, INF, INF, 9, 5, 16, INF},
         {INF, INF, INF, INF, INF, INF, 2, INF},
         {INF, INF, INF, INF, INF, INF, INF, 18},
         {INF, INF, INF, INF, INF, INF, INF, 13},
         {INF, INF, INF, INF, INF, INF, INF, 2},
         {INF, INF, INF, INF, INF, INF, INF, INF}};

    std::cout << shortestDistance(graph);
    return 0;
}