#include <stdio.h>
#include <stdlib.h>

int adj[10][10];
int v, e;

int colour[10];
int depth[10];
int parent[10];

void initGraph()
{
    int i, j;
    int s, d;
    printf("Enter Vertices & Edges: \n");
    scanf("%d%d", &v, &e);
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            adj[i][j]=0;
        }
    }

    printf("Enter Source & Destination: \n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d", &s,&d);
        adj[s][d]=1;
        adj[d][s]=1;
    }

    for(i=0;i<v;i++)
    {
        colour[i]=0;
        parent[i]=0;
        depth[i]=0;
    }
}

void DFS()
{
    int i;
    for(i=0;i<v;i++)
    {
        if(colour[i]==0)
        {
            DFSVisit(i);
        }
    }
}

void DFSVisit(int s)
{
    int i;
    colour[s]=1;
    for(i=0;i<v;i++)
    {
        if(adj[s][i]==1&&colour[i]==0)
        {
            parent[i]=s;
            depth[i]=depth[s]+1;
            //colour[i]=1;
            DFSVisit(i);
        }
    }
    colour[s]=2;
}

int main()
{
    int i;
    initGraph();
    DFS();

    for(i=0;i<v;i++)
    {
        printf("%d", depth[i]);
    }
    return 0;
}
