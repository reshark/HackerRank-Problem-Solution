#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        virtual void getdata(){
            return;
        }
        virtual void putdata(){
            return;
        }
};

class Professor : public Person {
    private:
        static int seq_id;
        int cur_id;
        int publications;
    public:
        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
        void getdata() {
            cin >> name >> age >> publications;   
        }
    public:
        Professor() {
            ++seq_id;
            cur_id = seq_id;
        }
};

int Professor::seq_id = 0;

class Student : public Person {
    private:
        static int seq_id;
        int cur_id;
        int marks[6] = { 0, };
    public:
        void putdata() {
            cout << name << " " << age << " ";
            int nSum(0);
            for (int i = 0; i < 6; i++) {
                nSum += marks[i];              
            }           
            cout << nSum << " " << cur_id << endl;
        }
        void getdata() {
            cin >> name >> age;
            for (int i = 0; i < 6; i++) {
                cin >> marks[i];
            }  
        }
    public:
        Student() {
            ++seq_id;
            cur_id = seq_id;
        }
};

int Student::seq_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
