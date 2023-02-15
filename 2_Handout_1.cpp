// APS 2023 Hand-out 01

// What does the below code do ?
// Answer --> 

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int num[10000];
    int i,n,j,k,temp;

    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter n numbers:"<<endl;
    for(int i=0;i<n;i++)
        cin>>num[i];
    cout<<endl;

    for(j=1;j<=n;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;

            for(k=0;k<n;k++)
                cout<<num[k]<<" ";
            cout<<endl;
        }
    }

    return 0;
}