#include<stdio.h>
int adj[10][10];
int queue[30];
int front =0;
int rear=0;

int color[10];
int parent[10];
int breadth[10];
int v,e;

void enqueue(int x) // Function to enqueue elements
{
    queue[rear]=x;
    rear++;
}

int dequeue() // Function to dequeue the elements
{
    int x;
    x=queue[front];
    front++;
    return x;
}
void initGraph() // Function to initialize the graph
{
    int i,j;
    int s,d;
    printf("Enter the number of vertices:");
    scanf("%d", &v);
    printf("\nEnter the number of edges:");
    scanf("%d", &e);
    for (i=0; i<v; i++)
    {
        for (j=0; j<v; j++)
        {
            adj[i][j]=0;
        }
    }

    for(i=0; i<e; i++)
    {
        printf("\nEnter the source:");
        scanf("%d", &s);
        printf("\nEnter the destination:");
        scanf("%d", &d);
        adj[s][d] = adj[d][s] = 1;
    }

    for (i=0; i<v; i++)
    {
        color[i]=0;
        parent[i]=-1;
        breadth[i]=0;
    }

}

void BFS(int start) // Function to start Breadth first search
{
    int x,j;
    enqueue(start);
    color[start]=1;
    while(front!=rear)
    {
        x=queue[front];
        for(j=0; j<v; j++)
        {
            if(adj[x][j] == 1)
            {
                if (color[j] == 0)
                {
                    enqueue(j);
                    color[j] = 1;
                    parent[j] = x;
                    breadth[j]=breadth[x] + 1;
                }
            }
        }
        color[x]=2;
        dequeue();
    }
}

void main() // Driver function
{
    int startingNode=1;
    int i;
    initGraph();
    BFS(startingNode);
    for(i=0; i<v; i++)
    {
        printf("%d ",breadth[i]);
    }
}
