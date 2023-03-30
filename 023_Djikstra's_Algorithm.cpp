#include<stdio.h>
#define MAX 5

void read_matrix(int mat[][MAX])
{
    printf("\n--------Enter values---------\n");
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    }
}

void ini(int dist[],int pi[],int s)
{
    for(int i=0;i<MAX;i++)
    {
        pi[i]=-1;
        dist[i]=999;
    }
    pi[s]=-1;
    dist[s]=0;
}

void relax(int u,int v,int w,int dist[],int pi[])
{
    if((dist[u]+w)<dist[v])
    {
        dist[v]=dist[u]+w;
        pi[v]=u;
    }
}

int main()
{
    int i,j,g[MAX][MAX],pi[MAX],dist[MAX],s;
    printf("Enter elements\n");
    read_matrix(g);
    for(i=0;i<MAX;i++)
    {
        printf("\n");
        for(j=0;j<MAX;j++)
            printf("%d ",g[i][j]);
    }
    printf("Enter source\n");
    scanf("%d",&s);
    ini(dist,pi,s);
    for(j=0;j<MAX;j++)
    {
        if(g[s][j]!=0)
        relax(s,j,g[s][j],dist,pi);
    }
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            if(g[i][j]!=0)
            {
                relax(i,j,g[i][j],dist,pi);
            }
        }
    }
    printf("\nDist\n");
    for(i=0;i<MAX;i++)
    {
        printf("%d ",dist[i]);
    }
    printf("\nPi\n");
    for(i=0;i<MAX;i++)
    {
        printf("%d ",pi[i]);
    }
    return 0;
}
