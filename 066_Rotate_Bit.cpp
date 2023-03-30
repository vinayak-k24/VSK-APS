#include<iostream>
using namespace std;
#define INT_BITS 32

class rotate_bits
{
    public:
    
    int leftRotate(int n, unsigned int d)
    {
	    return (n << d)|(n >> (INT_BITS - d));
    }

    int rightRotate(int n, unsigned int d)
    {
	    return (n >> d)|(n << (INT_BITS - d));
    }
};

int main()
{
	rotate_bits g;

	int n = 16;
	int d = 2;
	
    cout << "Left Rotation of " << n << " by " << d << " is ";
	
    cout << g.leftRotate(n, d);
	
    cout << "\nRight Rotation of " << n << " by " << d << " is ";
	
    cout << g.rightRotate(n, d);
	
    return 0;
}
