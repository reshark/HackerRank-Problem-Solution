#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function

    vector<int> VecInts;

    if (!str.empty())
    {
        stringstream ss(str);
        string strTemp = "";

        while (getline(ss, strTemp, ','))
        {
            int nElement = stoi(strTemp);
            VecInts.push_back(nElement);
        }
    }

    return VecInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}