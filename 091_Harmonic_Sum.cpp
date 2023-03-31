// Sum of Harmonic Series

#include<bits/stdc++.h>
using namespace std;

double sum(int n)
{
    double i, s = 0.0;
    
    for(i = 1; i <= n; i++)
	    s = s + 1 / i;
	
    return s;
}

int main()
{
	int n;
    cin>>n;
	
	cout << "Sum is " << sum(n);
	return 0;
}
