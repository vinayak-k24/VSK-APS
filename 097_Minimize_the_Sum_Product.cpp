// https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a, a + n);
        sort(b, b + n);
        
        long long int sum=0;
        
        for(int i=0;i<n;i++)
            sum = sum + (a[n-i-1]*b[i]);
            
        return sum;
        
        
    }
};

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, i;
         cin>>n;
         int a[n], b[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         for(i=0;i<n;i++)
         cin>>b[i];
         Solution ob;
         cout<< ob.minValue(a, b, n) <<endl;
     }
	
	return 0;
}