//Input - size of array N, array elements A[0] ........... A[N-1]

//Output - Sorted Array


#include<bits/stdc++.h>
using namespace std;

int BubbleSort(int N,int A[])
{
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int tmp=A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
        
    return 1;
}

int main()
{
    int N;
    cout<<"N - ";
    cin>>N;
    int A[N];
    cout<<"Enter array Elements - "<<endl;

    for(int i=0;i<N;i++)
        cin>>A[i];

    BubbleSort(N,A);

    cout<<"Sorted Array -"<<endl;
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";

    return 0;
}