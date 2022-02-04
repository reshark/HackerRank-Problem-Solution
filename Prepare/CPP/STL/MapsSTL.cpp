#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    //input total query count
    int nQ(0);
    cin >> nQ;
    
    //use map
    map<string, int> m;
    
    for ( int i = 0; i < nQ; i++ ){
        
        //input query type
        int nType(0);
        string strName("");
        cin >> nType;
        cin >> strName;
        
        // Check query type
        if (nType == 1) {
            
            int nMark(0);
            cin >> nMark;
            
            //Check if the name already exists 
            map<string, int>::iterator it = m.find(strName);
            if (it != m.end()) {
                it->second += nMark;   
            }
            else {
                m.insert(make_pair(strName, nMark));
            }
        }
        else if (nType == 2) {
            m.erase(strName);
        }
        else { // nType == 3 
            map<string, int>::iterator it = m.find(strName);
            if (it != m.end()) {
                cout << it->second << endl;
            }
            else {
                cout << "0" << endl;
            }
        }      
        
    }
      
    return 0;
}



