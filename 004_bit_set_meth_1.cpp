#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count=0;

    while(n) {
        count += n&1;
        n>>=1;
    }

    return count;
}

int main()
{
    unsigned int n;
    cout<<"Enter n :";
    cin>>n;

    unsigned int res=countSetBits(n);

    // cout<<"No of 1 bits / set bits in "<<n<<" is / are = "<<res;

    cout<<"Set bits = "<<res;

    return 0;

}