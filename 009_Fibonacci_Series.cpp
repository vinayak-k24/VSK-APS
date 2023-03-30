// Input - Any integer N
 
//Output - Fibonacci series till N numbers


#include<bits/stdc++.h>
using namespace std;


int Fibonacci(int N)
{
    int t1=0,t2=1,nextNum=0;

    for(int i=1;i<=N;i++)
    {   
        if(i==1)
        {
            cout<<t1<<" ";
            continue;
        }

        else if(i==2)
        {
            cout<<t2<<" ";
            continue;
        }

        nextNum = t1+t2;
        t1=t2;
        t2=nextNum;

        cout<<nextNum<<" ";
    }
}

int main()
{
    int N;
    cout<<"Input - ";
    cin>>N;

    cout<<"Output - ";
    Fibonacci(N);
}