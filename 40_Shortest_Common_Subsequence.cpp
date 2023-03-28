#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1,s2;
    cout<<"Enter String s1 : "<<endl;
    cin>>s1;
    cout<<"Enter String s2 : "<<endl;
    cin>>s2;

    vector<vector <int>> dp(s1.size()+1, vector<int>(s2.size()+1));

    // vector<char> ans;

    dp[0][0] = 0;
    
    for(int i=1;i<=s1.length();i++)
        dp[i][0] = i;

    for(int j=1;j<=s2.length();j++)
        dp[0][j] = j;

    for(int i=1;i<=s1.size();i++)
        for(int j=1;j<=s2.size();j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            
            else
            {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + 1;

                // ans.push_back(s1[i-1]);
            }
        }
    

    cout<<"Length of Shortest Common Subsequence : "<<dp[s1.size()][s2.size()]<<endl;

    // for(int i=0; i<dp[s1.size()][s2.size()]; i++)
        // cout<<ans[i]<<endl;

    return 0;
}