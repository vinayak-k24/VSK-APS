/*
    Input - 5

    Output -
              1   
            1   1   
          1   2   1   
        1   3   3   1   
      1   4   6   4   1 

*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows, constant = 1;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i = 0; i < rows;i++) 
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
                constant = 1;
            else
                constant = constant*(i-j+1)/j;

            cout<<constant<<"   ";
        }
        cout<<endl;
    }

    return 0;
}
