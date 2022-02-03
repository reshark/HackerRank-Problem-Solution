#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    //input N
    int n;
    cin >> n;

    //input SortedOrder
    vector<int> vecSortedOrder;
    for (int i = 0; i < n; i++)
    {
        int nInput(0);
        cin >> nInput;
        vecSortedOrder.push_back(nInput);
    }

    //input Total Query
    int nTotalQ;
    cin >> nTotalQ;

    for (int i = 0; i < nTotalQ; i++)
    {
        //input Query
        int q(0);
        cin >> q;

        // use Lower Bound
        vector<int>::iterator itlowerBound;
        itlowerBound = lower_bound(vecSortedOrder.begin(), vecSortedOrder.end(), q);

        if (vecSortedOrder[itlowerBound - vecSortedOrder.begin()] == q)
            cout << "Yes" << " " << itlowerBound - vecSortedOrder.begin() + 1 << endl;
        else
            cout << "No" << " " << itlowerBound - vecSortedOrder.begin() + 1 << endl;
    }

    return 0;
}
