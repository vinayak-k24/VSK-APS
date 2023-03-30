#include<bits/stdc++.h>
using namespace std;

long int catalan( int n) 
{
   if (n <= 1)
      return 1;

   long int result = 0;
   
   for (int i=0; i<n; i++)
      result += catalan(i)*catalan(n-i-1);

   return result;
}

int main()
{
   int n;
   cout<<"Enter n value -";
   cin>>n;
   cout<<endl;
   
   for(int i = 0; i < n; i++)
      cout<<catalan(i)<<" ";
   
   return 0;
}