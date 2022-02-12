#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int nStartPoint(s);
    int nEndPoint(t);
    int nAppleTreeLoc(a);
    int nOrangeTreeLoc(b);
    
    //convert apples location
    vector<int> convertApples;
    for (vector<int>::iterator it = apples.begin(); it != apples.end(); it++) {
        int nConvertLoc = nAppleTreeLoc + *it;
        convertApples.push_back(nConvertLoc);
    }
    //convert Orange location
    vector<int> convertOranges;
    for (vector<int>::iterator it = oranges.begin(); it != oranges.end(); it++) {
        int nConvertLoc = nOrangeTreeLoc + *it;
        convertOranges.push_back(nConvertLoc);
    }
    
    //Check Apples
    int nCountApple(0);
    for (vector<int>::iterator it = convertApples.begin(); it != convertApples.end(); it++) {
        if (*it >= nStartPoint && *it <= nEndPoint) {
            nCountApple++;
        }
    }
    
    //Check Oranges
    int nCountOrange(0);
    for (vector<int>::iterator it = convertOranges.begin(); it != convertOranges.end(); it++) {
        if (*it >= nStartPoint && *it <= nEndPoint) {
            nCountOrange++;
        }
    }
    
    //Output
    cout << nCountApple << endl;
    cout << nCountOrange << endl;
}

// void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {    
//     //convert apples location
//     vector<int> convertApples;
//     for (vector<int>::iterator it = apples.begin(); it != apples.end(); it++) {
//         int nConvertLoc = a + *it;
//         convertApples.push_back(nConvertLoc);
//     }
//     //convert Orange location
//     vector<int> convertOranges;
//     for (vector<int>::iterator it = oranges.begin(); it != oranges.end(); it++) {
//         int nConvertLoc = b + *it;
//         convertOranges.push_back(nConvertLoc);
//     }
    
//     //Check Apples
//     int nCountApple(0);
//     for (vector<int>::iterator it = convertApples.begin(); it != convertApples.end(); it++) {
//         if (*it >= s && *it <= t) {
//             nCountApple++;
//         }
//     }
    
//     //Check Oranges
//     int nCountOrange(0);
//     for (vector<int>::iterator it = convertOranges.begin(); it != convertOranges.end(); it++) {
//         if (*it >= s && *it <= t) {
//             nCountOrange++;
//         }
//     }
    
//     //Output
//     cout << nCountApple << endl;
//     cout << nCountOrange << endl;
// }

int main()
{
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int s = stoi(first_multiple_input[0]);

    int t = stoi(first_multiple_input[1]);

    string second_multiple_input_temp;
    getline(cin, second_multiple_input_temp);

    vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

    int a = stoi(second_multiple_input[0]);

    int b = stoi(second_multiple_input[1]);

    string third_multiple_input_temp;
    getline(cin, third_multiple_input_temp);

    vector<string> third_multiple_input = split(rtrim(third_multiple_input_temp));

    int m = stoi(third_multiple_input[0]);

    int n = stoi(third_multiple_input[1]);

    string apples_temp_temp;
    getline(cin, apples_temp_temp);

    vector<string> apples_temp = split(rtrim(apples_temp_temp));

    vector<int> apples(m);

    for (int i = 0; i < m; i++) {
        int apples_item = stoi(apples_temp[i]);

        apples[i] = apples_item;
    }

    string oranges_temp_temp;
    getline(cin, oranges_temp_temp);

    vector<string> oranges_temp = split(rtrim(oranges_temp_temp));

    vector<int> oranges(n);

    for (int i = 0; i < n; i++) {
        int oranges_item = stoi(oranges_temp[i]);

        oranges[i] = oranges_item;
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
