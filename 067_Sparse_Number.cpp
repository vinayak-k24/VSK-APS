#include <bits/stdc++.h>
using namespace std;

bool checkSparse(int n)
{
    if (n & (n >> 1))
        return false;

    return true;
}

int main()
{
    cout << checkSparse(72) << endl;

    cout << checkSparse(12) << endl;
    
    return 0;
}