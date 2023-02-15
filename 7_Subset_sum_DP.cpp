// Subset Sum Problem using Dynamic Programming 

/* input - 
4
2,3,5,7
9
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> elements(n);
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++)
        cin>>elements[i];

    int sum;
    cout<<"Enter the sum value :";
    cin>>sum;

    vector<vector <int>> SS(n+1, vector<int>(sum+1));

    for(int j=0;j<sum+1;j++)
        SS[0][j]=0;

    for(int i=0;i<n+1;i++)
        SS[i][0]=1;

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(SS[i-1][j] == 1)
                SS[j][i] = 1;

            else if(elements[i-1] > j)
                SS[i][j] = 0;

            else
                SS[i][j] = SS[i-1][j - elements[i-1]];
        }
    }

    cout<<SS[n][sum];

    return 0;
}