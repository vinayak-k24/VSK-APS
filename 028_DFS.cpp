#include<stdio.h>
# define MAX 5


int visited[MAX];

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

void DFS(int arr[][MAX],int n,int s)
{
    int i;
    visited[s]=1;
    for(i=0;i<n;i++)
    {
        if(arr[s][i]==1 && visited[i]==0)
        {
            printf("%d ",i);
            DFS(arr,n,i);
        }
    }
}

int main()
{
    int i,arr[MAX][MAX],n,s;
    read_matrix(arr);
    for(i=0;i<MAX;i++)
    {
        visited[i]=0;
    }
    n=MAX;
    printf("\nEnter source\n");
    scanf("%d",&s);
    printf("\nDFS %d \n",n);
    printf("%d ",s);
    DFS(arr,MAX,s);
}