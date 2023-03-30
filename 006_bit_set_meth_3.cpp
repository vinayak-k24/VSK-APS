// Brain Karnighan's Algorithm

#include<bits/stdc++.h>
using namespace std;

unsigned int CountBits(int n)
{
    int count=0;

    while(n)
    {
        n &= (n-1);
        count++;
    }

    return count;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int res = CountBits(n);
    cout<<"Answer = "<<res;

    return 0;
}