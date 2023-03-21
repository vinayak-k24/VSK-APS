#include<stdio.h>
#define MAX 4

void read_matrix(int mat[][MAX],int n);
void print_matrix(int mat[][MAX],int n);
void Floyd(int mat[][MAX],int n);

int main()
{
    int adjmat[MAX][MAX];
    read_matrix(adjmat,MAX);
    Floyd(adjmat,MAX);
    return 0;
}

void read_matrix(int mat[][MAX],int n)
{
    printf("\n-------Enter values---------\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
}

void print_matrix(int mat[][MAX],int n)
{
    int i,j;
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
}

void Floyd(int mat[][MAX],int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(mat[i][k]==1 && mat[k][j]==1)
                    {
                        mat[i][j]=1;
                    }
                }
            }
        }
        printf("\n-------Intermediate is %d------------\n",k);
        print_matrix(mat,MAX);
    }
}

