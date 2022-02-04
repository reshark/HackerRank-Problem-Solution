#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    //input total q count
    int nQ(0);
    cin >> nQ;
    
    //use set
    set<int> s;
    
    for (int i = 0 ; i < nQ ; i++ )
    {
        //input query type
        int nType(0);
        int nValue(0);
        
        cin >> nType; 
        cin >> nValue;
        if (nType == 1)
        {
            s.insert(nValue);
        }
        else if (nType == 2)
        {
            s.erase(nValue);
        }
        else // nType == 3
        {
            set<int>::iterator it = s.find(nValue);
            if (it==s.end())
            {
                cout << "No" << endl;
            }
            else 
            {
                cout << "Yes" << endl;
            }
        }
    }
    
    return 0;
}



