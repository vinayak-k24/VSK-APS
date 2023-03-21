#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct graph
{
   int u,v,w;
}GRAPH;

void kruskal(GRAPH G[],int n,int e)
{
    int a[n],temp=0;

    for(int i=0;i<=n;i++)
        a[i]=i;

    for(int j=0;j<e;j++)
    {
        int x = a[G[j].u];
        int y = a[G[j].v];

        if(a[x]!=a[y])
        {
            printf("%d\t%d\n",G[j].u,G[j].v);

            for(int k=0;k<=n;k++)
            {
                if(a[k]==x)
                    a[k]=y;
            }

        }
    }
}

void bubble_sort(GRAPH a[], int n)
{
    int i,j;

    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-2-i; j++)
        {
            if(a[j].w > a[j+1].w)
            {
                GRAPH temp;

                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;               
            }
        }
    }
}


int main()
{
    int n,e;

    printf("No of vertices:");
    scanf("%d",&n);
    printf("No of edges:");
    scanf("%d",&e);

    GRAPH G[20];

    printf("Enter the sort edges and weight...............\n");

    for(int i=0;i<e;i++)
        scanf("%d%d%d",&G[i].u,&G[i].v,&G[i].w);


    bubble_sort(G,n);
    printf("The min spanning tree is:\n");
    kruskal(G,n,e);


    return 0;
}