# Shortest Distance in a Graph

This project contains a C++ program that calculates the shortest distance from the first node to the last node in a directed graph using a dynamic programming approach. The graph is represented as an adjacency matrix.

## Files

- main.cc: Contains the implementation of the shortest distance algorithm and the driver code.

## Algorithm

The algorithm implemented in this project uses dynamic programming to find the shortest path from the first node to the last node in a directed graph. The graph is represented as an adjacency matrix where graph[i][j] holds the weight of the edge from node i to node j. If there is no edge between nodes i and j, the value is set to INF (infinity).

## Steps

1. Initialize a distance array dist where dist[i] will hold the shortest distance from node i to the last node.
2. Set the distance of the last node to itself as 0.
3. Iterate from the second last node to the first node:
    - Set the initial distance to INF.
    - For each node, update the distance by considering all possible edges to subsequent nodes and choosing the minimum distance.

## Usage

To compile and run the program, use the following commands in the terminal:

```bash
g++ -o shortest_distance main.cc
./shortest_distance
```

## Example

Given the following graph represented as an adjacency matrix:

```cpp
int graph[N][N] =
{{INF, 1, 2, 5, INF, INF, INF, INF},
 {INF, INF, INF, INF, 4, 11, INF, INF},
 {INF, INF, INF, INF, 9, 5, 16, INF},
 {INF, INF, INF, INF, INF, INF, 2, INF},
 {INF, INF, INF, INF, INF, INF, INF, 18},
 {INF, INF, INF, INF, INF, INF, INF, 13},
 {INF, INF, INF, INF, INF, INF, INF, 2},
 {INF, INF, INF, INF, INF, INF, INF, INF}};
```

The program will output the shortest distance from the first node to the last node.

## Dependencies

C++ compiler (e.g., g++)
