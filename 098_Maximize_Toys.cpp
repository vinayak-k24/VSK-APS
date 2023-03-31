// https://practice.geeksforgeeks.org/problems/maximize-toys0331/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        
        int sum=0,i;
        
        for(i=0;i<N;i++)
        {
            sum = sum + arr[i];
            
            if(sum > K)
                break;
        }
        
        return i;
    }
};

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);

        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }

    return 0;
}