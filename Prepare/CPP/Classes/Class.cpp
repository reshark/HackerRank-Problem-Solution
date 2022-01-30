#include <iostream>
#include <sstream>
using namespace std;

class Student {

private :
    int myAge;
    int myStandard;
    string mystrFirst_name;
    string mystrLast_name;

public :
    int get_age()
    {
        return myAge;
    }
    int get_standard()
    {
        return myStandard;
    }
    string get_first_name()
    {
        return mystrFirst_name;
    }
    string get_last_name()
    {
        return mystrLast_name;
    }

    void set_age(int nAge)
    {
        myAge = nAge;
    }
    void set_standard(int nStandard)
    {
        myStandard = nStandard;
    }
    void set_first_name(string strFirstName)
    {
        mystrFirst_name = strFirstName;
    }
    void set_last_name(string strLastName)
    {
        mystrLast_name = strLastName;
    }

    string to_string()
    {
        stringstream stream;
        stream << myAge << "," << mystrFirst_name << "," << mystrLast_name << "," << myStandard;

        string strValue("");
        stream >> strValue;

        return strValue;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}