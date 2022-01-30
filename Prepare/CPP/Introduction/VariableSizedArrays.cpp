#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int nIndex = 0; int q = 0;

	cin >> nIndex; // the number of variable-length arrays.
	cin >> q; // the number of queries.

	int** nArray = new int*[nIndex];

	// array input
	for (int i = 0; i < nIndex; i++)
	{
		int k;
		cin >> k;

		nArray[i] = new int[k];

		for (int j = 0; j < k; j++)
		{
			int value;
			cin >> value;

			nArray[i][j] = value;
		}
	}

	// query input
	for (int i = 0; i < q; i++)
	{
		int a = 0;
		int b = 0;
		int nResult = 0;

		cin >> a;
		cin >> b;

		nResult = nArray[a][b];

		cout << nResult << endl;
	}

	return 0;
}