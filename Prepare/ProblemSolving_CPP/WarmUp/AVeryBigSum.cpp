#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    //Input N
    int nInput(0);
    cin >> nInput;

    if (nInput != 0)
    {
        //Input Vector
        vector<int> vecInput;
        for (int i = 0; i < nInput; i++)
        {
            int nVecInput(0);
            cin >> nVecInput;
            if (nVecInput != 0)
                vecInput.push_back(nVecInput);
        }

        //sort
        sort(vecInput.begin(), vecInput.end());

        //output
        for (int i = 0; i < nInput; i++)
            cout << vecInput[i] << " ";
    }

    return 0;
}
