#include <bits/stdc++.h>
using namespace std;

void countSort(int array[], int size) 
{
  int output[size], count[size] ;
  int max = array[0];

  // Finding the largest element in the array
  for(int i = 1; i < size; i++) 
    if(array[i] > max)
        max = array[i];

  // Initialize count array with all zeros.
  for(int i = 0; i <= max; ++i)
    count[i] = 0;

  // Store the count of each element
  for(int i = 0; i < size; i++)
    count[array[i]]++;

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++)
    count[i] += count[i - 1];

  // Find the index of each element of the original array in count array, and place the elements in output array
  for(int i = size - 1; i >= 0; i--) 
  {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for(int i = 0; i < size; i++) 
    array[i] = output[i];
}

int main() 
{
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0; i<n; i++)
        cin>>array[i];

    countSort(array, n);
    
    for(int i = 0; i < n; i++)
        cout<<array[i]<<" ";

    return 0;
}