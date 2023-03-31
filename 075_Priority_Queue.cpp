#include<bits/stdc++.h>
using namespace std;

int main() 
{
  // create a queue of int
  priority_queue<int> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  cout << "Priority Queue: ";

  // display all elements of numbers
  while(!numbers.empty()) 
  {
    cout << numbers.top() << ", ";   
    numbers.pop();
  }

  cout << endl;

  return 0;
}