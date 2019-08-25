#include <stdio.h>
#include <stdlib.h>
int adj[10][10];
int queue[10];
int front = 0;
int rear = 0;
int color[10],
    parent[10],
    breadth[10];
int v, e;

int s, d;
void enqueue(int x)
{
    queue[rear] = x;
    rear++;
}
int dequeue()
{
    int s = queue[front];
    front++;
    return s;
}

void initGraph()
{
    int i,j;
    scanf("%d %d", &v, &e);
    for(i=0; i<v; i++)
        for(j=0; j<v; j++)
            adj[i][j] = 0;
    for (i=0; i < e; i++)
    {
        printf("enter s d\n");
        scanf("%d %d", &s, &d);
        adj[s][d] = adj[d][s] = 1;
    }
    for (i = 0; i<v; i++)
    {
        color[i]=0;
        parent[i]=-1;
        breadth[i]=0;
    }
}
void BFS(int start)
{
    int x;
    int j;
    enqueue(start);
    color[start] = 1;
    while (front!=rear)
    {
        x=queue[front];
        for(j = 0; j < v; j++)
            if (adj[x][j] == 1)
            {
                enqueue(j);
                color[j]=1;
                parent[j]=x;
                breadth[x] += 1;
            }
    }
    color[x]=2;
    dequeue();

}
void main()
{
    int startNode = 1;
    initGraph();
    BFS(startNode);
}
