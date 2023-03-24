/*
    Input - 5

    Output -
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15
*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int rows,constant = 1;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i = 1; i <= rows; i++) 
    {
        for(int j = 1; j <= i; ++j) 
        {
            cout<<constant<< " ";
            ++constant;
        }
        cout<<endl;
    }
    return 0;
}