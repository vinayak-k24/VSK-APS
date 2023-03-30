#include <bits/stdc++.h>
using namespace std;
const int MAX_VERTEX = 101;
int Arr[MAX_VERTEX];
int size[MAX_VERTEX];

void initialize(int n)
{
	for (int i = 0; i <= n; i++) 
    {
		Arr[i] = i;
		size[i] = 1;
	}
}

int find(int i)
{
	while (Arr[i] != i)
	{
		Arr[i] = Arr[Arr[i]];
		i = Arr[i];
	}

	return i;
}

void _union(int xr, int yr)
{
	if (size[xr] < size[yr])
	{
		Arr[xr] = Arr[yr];
		size[yr] += size[xr];
	}

	else
	{
		Arr[yr] = Arr[xr];
		size[xr] += size[yr];
	}
}

int isCycle(vector<int> adj[], int V)
{
	for (int i = 0; i < V; i++) 
    {
		for (int j = 0; j < adj[i].size(); j++) 
        {
			int x = find(i);
			int y = find(adj[i][j]);

			if (x == y)
				return 1;
			_union(x, y);
		}
	}
	return 0;
}

int main()
{
	int V = 3;
	initialize(V);

	/* Let us create following graph
		0
		| \
		| \
		1-----2 */

	vector<int> adj[V];

	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(2);

	if (isCycle(adj, V))
		cout << "Graph contains Cycle.\n";
	else
		cout << "Graph does not contain Cycle.\n";

	return 0;
}
