#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
    // attribute
    int mynScores = 0;


    // method
public:
    void input()
    {
        int scoreArray[5] = { 0, }; 
        cin >> scoreArray[0] >> scoreArray[1] >> scoreArray[2] >> scoreArray[3] >> scoreArray[4];
        
        int nSumScores(0);

        for (int i = 0; i < 5; i++)
        {
            nSumScores += scoreArray[i];
        }

        mynScores = nSumScores;
    }

    int calculateTotalScore()
    {
        int nTotal(0);

        nTotal = mynScores;

        return nTotal;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student* s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
