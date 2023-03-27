#include<bits/stdc++.h>
using namespace std;

int main() 
{
    // int x, i, j, f;
    int N,flag;
    cout<<"Enter the range number to print the prime numbers:";
    cin>>N;
    
    cout<<"\n\nThe prime numbers between 1 and "<<N<<" are:\n";
 
    for(int i = 1; i <= N; i++) 
    {
        
        // They are niether prime nor composite if as skip 0 and 1
        if (i == 1 || i == 0) 
            continue;
        
        flag = 1;
 
        for (int j = 2; j <= i / 2; ++j) 
        {
            if (i % j == 0) 
            {
                flag = 0;
                break;
            }
        }
 
        // f = 1 means i is prime and f = 0 means i is not prime
        if (flag) 
            cout<<i<<" ";
        
    }
    return 0;
}