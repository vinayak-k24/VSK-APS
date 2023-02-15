// optimal assignment of n jobs to n people

/*
Input -
3
3 2 7
5 1 3
2 7 2
*/

/*
Output - 

DP values : 
0 3 2 4 7 6 5 6
6
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter n value : ";
    cin>>n;
    int cost[n][n];

    cout<<"Enter the values of the cost matrix -"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cost[i][j];
        }
    }

    vector<int> dp(pow(2,n),INT_MAX);
    dp[0]=0;

    for(int mask=0;mask<pow(2,n);mask++)
    {
        bitset<3> b(mask);
        int x = b.count();
        
        for(int j=0;j<n;j++)
        {
            if(!(mask & (1 << j)))
            {
                dp[mask | 1<<j]=min(dp[mask | 1<<j], dp[mask]+cost[x][j]);
            }
        }
    }

    cout<<endl<<"DP values : "<<endl;

    for(int i=0;i<pow(2,n);i++)
        cout<<dp[i]<<" ";

    cout<<endl<<dp[pow(2,n)-1];

    return 0;
}