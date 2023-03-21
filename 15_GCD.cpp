//  Input - Any two inetegers

// Output - GCD or HCF of two numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int gcd;

    if (a > b)
    {
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }

    if (b % a != 0)
        gcd = 1;
    else
    {
        for (int i = a; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
                // cout<<"HAH";
                break;
            }
        }
    }

    cout << gcd;
    return 0;
}