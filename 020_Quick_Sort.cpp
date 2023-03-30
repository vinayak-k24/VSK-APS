#include<bits/stdc++.h>
using namespace std;

void Quicksort(int a[],int l,int r);
int partition(int a[],int l,int r);

void fill_random(int arr[],int n)
{
    for(int i=0;i<n;i++)
        arr[i]=rand()%100;
}

void swap(int *a,int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}

void print_matrix(int mat[],int n)
{
    int i,j;
    cout<<endl;

    for(i=0;i<n;i++)
        cout<<mat[i]<<" ";
}

int main()
{
    int n,*a;
    printf("Number of elements\n");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    fill_random(a,n);
    print_matrix(a,n);
    Quicksort(a,0,n-1);
    print_matrix(a,n);
    return 0;
}

void Quicksort(int a[],int l,int r)
{
    if(l>=r)
        return;
    int i,j;
    i=l+1;
    j=r;
    while(i<=j)
    {
        while(i<=r && a[i]<a[l])
            i++;
        while(j>l && a[j]>a[l])
            j--;
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
    swap(&a[j],&a[l]);
    Quicksort(a,l,j-1);
    Quicksort(a,j+1,r);
    }
}

