//Pattern series 1

/*
Input - 5

Output -
1               5
    2       4
        3
            4
    2           5
1

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(i==j || i+j == N+1)
                cout<<j;

            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}