#include<bits/stdc++.h>
using namespace std;

int LCS_Function()
{
   // Declaring two strings
   string str1,str2;   

    // Taking input strings
    cout<<"Enter First String :"<<endl;
    cin>>str1;
    cout<<"Enter Second String :"<<endl;
    cin>>str2;

    // Assigning the length of the strings to len1 and len2
    int len1=str1.size();   
    int len2=str2.size();

    //Declaring the Matrix
    vector<vector <int>>  LCS(len1+1, vector<int>(len2+1,0)); 

    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                LCS[i][j] = LCS[i-1][j-1]+1;
                // cout<<"Match";
            } 

            else
            {
                LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
                // cout<<"Unmatch";
            }
                
        }
    }

    return LCS[len1][len2];
}

int main()
{   
    int Result=LCS_Function();    
    cout<<"Longest Common Subsequence length = "<<Result;

    return 0;    
}