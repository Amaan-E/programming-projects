﻿#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define V 5

int minweight(int weight[], bool mstSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && weight[v] < min)
            min = weight[v], min_index = v;

    return min_index;
}

int printMST(int parent[], int graph[V][V]) {
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i,
            graph[parent[i]][i]);
}

void primMST(int graph[V][V]) {
    // final mst
    int parent[V];
    // weights
    int weight[V];
    // which was included
    bool mstSet[V];

    for (int i = 0; i < V; i++)
        weight[i] = INT_MAX, mstSet[i] = false;

    weight[0] = 0;

    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = minweight(weight, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < weight[v]) {
                parent[v] = u;
                weight[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph);
}

int main() {
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };

    primMST(graph);

    return 0;
}