#include<bits/stdc++.h>
using namespace std;

int countBits(int n)
{
    int c=0;
    while(n)
    {
        if(n&1)
            c++;
        n = n>>1;
    }

    return c;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int res=countBits(n);
    cout<<"Answer = "<<res<<endl;

    return 0;
}