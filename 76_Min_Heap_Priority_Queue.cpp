#include<bits/stdc++.h>
using namespace std;

int main() 
{
  // create a priority queue of int
  // arranges elements in ascending order
  priority_queue<int, vector<int>, greater<int>> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  // print element with highest priority
  cout << "Top element: " << numbers.top();

  return 0;
}