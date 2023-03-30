#include<bits/stdc++.h>
using namespace std;

#define MARowsRows 9999999
#define V 5

int G[V][V] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}
};

int main() 
{
  int N;
  int selected[V];

  memset(selected, false, sizeof(selected));
  N = 0;
  selected[0] = true;

  int rows, columns;

  cout<<"Edge"<<" : "<<"Weight"<<endl;

  while (N < V - 1) 
  {
    int min = MARowsRows;
    rows = 0;
    columns = 0;

    for(int i = 0; i < V; i++) 
    {
      if(selected[i]) 
      {
        for(int j = 0; j < V; j++) 
        {
          if(!selected[j] && G[i][j]) 
          {
            if(min > G[i][j]) 
            {
              min = G[i][j];
              rows = i;
              columns = j;
            }
          }
        }
      }
    }

    cout<<rows<<" - "<<columns<<" :  "<<G[rows][columns]<<endl;
    selected[columns] = true;
    N++;
  }

  return 0;
}