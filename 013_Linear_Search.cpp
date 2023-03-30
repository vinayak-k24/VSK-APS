#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int N,int A[],int find)
{
    for(int i=0;i<N;i++)
    {
        if(A[i]==find)
            return i;
    }
    return -1;
}

int main()
{
    int N;
    cout<<"Enter N(Size of Array) - ";
    cin>>N;

    cout<<"Enter Array Elements - "<<endl;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    
    int find;
    cout<<"Enter element to Search - ";
    cin>>find;

    int found = LinearSearch(N,A,find);

    if(found==-1)
        cout<<"\nElement Not Found"<<endl;
    else
        cout<<"\nElement Location "<<found+1<<endl;
    
    return 0;
}