#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the count of natural numbers : "<<endl;
    cin>>n;

    // int sum=0;
    // for(int i=1; i<=n; i++)
    //     sum += i;

    int sum = (n*(n+1))/2;

    cout<<"Sum of first "<<n<<" natural numbers : "<<sum<<endl;


    return 0;
}