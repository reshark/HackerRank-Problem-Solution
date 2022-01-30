#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    //Input 
    int nInput(0);
    cin >> nInput;

    vector<int> vec;
    for (int i = 0; i < nInput; i++)
    {
        int nValue;
        cin >> nValue;
        vec.push_back(nValue);
    }

    //erase
    cin >> nInput;

    int nStart(0), nEnd(0);
    cin >> nStart >> nEnd;

    vec.erase(vec.begin() + nInput - 1);
    vec.erase(vec.begin() + nStart - 1, vec.begin() + nEnd - 1);

    //output
    cout << vec.size() << endl;
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        cout << *it << " ";

    return 0;
}
