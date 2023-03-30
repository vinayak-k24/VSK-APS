#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int A[],int left,int right,int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
  
        // Check if x is present at middle
        if (A[mid] == x)
            return mid;
  
        // If x greater, ignore left half
        if (A[mid] < x)
            left = mid + 1;
  
        // If x is smaller, ignore right half
        else
            right = mid - 1;
    }
    
    return -1;
}

int main()
{
    int N;
    cin>>N;

    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];

    int find;
    cin>>find;

    int found = BinarySearch(A,0,N-1,find);

    if(found == -1)
        cout<<"Element is not present in array";
    else
        cout<< "Element is present at index - " <<found;

    return 0;
}