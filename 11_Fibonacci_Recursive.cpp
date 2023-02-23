// Input - Any integer N
 
//Output - Fibonacci series till N numbers

#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int N)
{
    if(N<=1)
        return N;
    return Fibonacci(N-1) + Fibonacci(N-2);
}

int main()
{
    int N;
    cout<<"Input - ";
    cin>>N;

    for (int i=0;i<N;i++)
        cout<<Fibonacci(i)<<" ";
}