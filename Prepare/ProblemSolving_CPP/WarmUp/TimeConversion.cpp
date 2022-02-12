#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    vector<string> vec;

    string strResult("");

    if (s.substr(8, 2) == "PM") {
        int nTemp(0);

        nTemp = stoi(s.substr(0, 2));
        if (nTemp < 12) {
            nTemp += 12;
        }
        s.replace(0, 2, to_string(nTemp));
    }
    else { // s.substr(8,2) == "AM"
        int nTemp(0);
        nTemp = stoi(s.substr(0, 2));
        if (nTemp >= 12) {
            nTemp -= 12;
        }
        s.replace(0, 2, "0" + to_string(nTemp));
    }
    strResult = s.substr(0, 8);

    return strResult;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
