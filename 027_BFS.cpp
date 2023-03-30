#include<stdio.h>
#define MAX 5

void read_matrix(int mat[][MAX])
{
    printf("\n-------Enter values---------\n");
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    }
}

int main()
{
    int arr[MAX][MAX],s,visited[MAX];
    printf("Enter matrix\n");
    read_matrix(arr);
    printf("\nEnter source\n");
    scanf("%d",&s);
    BFS(arr,MAX,s,visited);
    return 0;
}

void BFS(int arr[][MAX],int n,int s,int visited[])
{
    int q[20],r,f,i,u;
    f=r=0;
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    q[r]=s;
    visited[s]=1;
        printf("\nBFS\n");
        while(f<=r)
        {
            u=q[f];
            printf("%d ",u);
            f=f+1;
            for(i=0;i<n;i++)
            {
                if(arr[u][i]==1 && visited[i]==0)
                {
                    visited[i]=1;
                    r=r+1;
                    q[r]=i;
                }
            }
        }
}
