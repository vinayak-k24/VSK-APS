#include<stdio.h>
#include<stdlib.h>

int* createarray(int);
void fillarrayrandom(int [],int);
void fillarraydec(int [],int);
void fillarrayinc(int [],int);
void mergearraydec(int a[],int s1,int s2,int e1,int e2);
void mergearrayasc(int a[],int s1,int s2,int e1,int e2);
void mergesortasc(int a[],int l,int r);
void mergesortdec(int a[],int l,int r);
void swap(int *,int *);
void printarray(int a[],int n);

int main()
{
    int *a,n,ch1,ch2;
    long long c,d,e;
    printf("\nEnter no of elements of array\n");
    scanf("%d",&n);
    a=createarray(n);
    printf("\nEnter\n1:Sorted array\n2:Reverse sorted array\n3:Random array\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
        case 1:fillarrayinc(a,n);
                break;
        case 2:fillarraydec(a,n);
                break;
        case 3:fillarrayrandom(a,n);
                break;

    }
    printf("\nArray filled is:");
    printarray(a,n);
    printf("\nEnter 1 for asc\nEnter 2 for dec\n");
    scanf("%d",&ch2);
    switch(ch2)
    {

       case 1:mergesortasc(a,0,n-1);break;
       case 2:mergesortdec(a,0,n-1);break;

    }
    printf("\nSorted Array is:");
    printarray(a,n);
    return 0;
}

//Array of size n is created
int* createarray(int n)
{
    int *a;
    a=(int *)malloc(n*sizeof(int));
    return a;
}

//To fill array by random numbers
void fillarrayrandom(int a[],int n)
{
    //time_t t;
    //srand(time(t));
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100000000;
    }
}


//To swap to integers
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

//To print array elements
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("\n%d",a[i]);
    }
    printf("\n");
}

//To fill array by dec numbers
void fillarraydec(int a[],int n)
{
    //time_t t;
    //srand(time(t));
    for(int i=0;i<n;i++)
    {
        a[i]=1000-i;
    }
}

//To fill array by inc numbers
void fillarrayinc(int a[],int n)
{
    //time_t t;
    //srand(time(t));
    for(int i=0;i<n;i++)
    {
        a[i]=i+1000;
    }
}
//Merge sort
void mergesortasc(int a[],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesortasc(a,l,m);
        mergesortasc(a,m+1,r);
        mergearrayasc(a,l,m,m+1,r);
    }
}

void mergesortdec(int a[],int l,int r)
{
    if(l<r)
    {
        int m;
        m=(l+r)/2;
        mergesortdec(a,l,m);
        mergesortdec(a,m+1,r);
        mergearraydec(a,l,m,m+1,r);

    }
}

void mergearrayasc(int a[],int s1,int e1,int s2,int e2)
{
    int *temp,i,j,k;
    temp=(int *)malloc(sizeof(int)*(e2-s1+1));
    for(i=s1,k=0,j=s2;i<=e1 && j<=e2;)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=e1)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=e2)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    for(i=s1,k=0;i<=e2;i++,k++)
    {
        a[i]=temp[k];
    }
    free(temp);
}


void mergearraydec(int a[],int s1,int e1,int s2,int e2)
{
    int *temp,i,j,k=0;
    temp=(int *)malloc(sizeof(int)*(e2-s1+1));
    for(i=s1,j=s2;i<=e1 && j<=e2;k++)
    {
        if(a[i]>a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }
    }
    while(i<=e1)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=e2)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    for(i=s1,k=0;i<=e2;i++,k++)
    {
        a[i]=temp[k];
    }
    free(temp);
}