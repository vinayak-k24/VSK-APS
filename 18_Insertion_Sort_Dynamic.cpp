#include<bits/stdc++.h>
using namespace std;

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

void insertionsort(int arr[],int n)
{
    int data,i,j;

    for(i=1;i<n;i++)
    {
        data=arr[i];
        for(j=i-1;j>=0 && data<arr[j];j--)
            arr[j+1]=arr[j];

        arr[j+1]=data;
    }
}


void read_matrix(int mat[],int n)
{
    cout<<endl<<"Enter values --"<<endl;
    
    int i;
    for(i=0;i<n;i++)
        cin>>mat[i];

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
    int *arr,i,n;

    cout<<"Number of elements"<<endl;
    cin>>n;
    
    arr=(int*)malloc(sizeof(int)*n);

    fill_random(arr,n);

    cout<<endl<<"Filled array";
    print_matrix(arr,n);

    insertionsort(arr,n);

    cout<<endl;
    cout<<endl<<"Sorted array";
    print_matrix(arr,n);

    return 0;
}

