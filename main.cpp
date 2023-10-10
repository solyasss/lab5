#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() = default;
    Person(const string n, const int a) : name(n), age(a) {}

    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void print() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class University
{
private:
    string uni_name;
    int adm_year;
    string faculty;

public:
    University() = default;
    University(const string u, const int e, const string f) : uni_name(u), adm_year(e), faculty(f) {}

    void input()
    {
        cout << "Enter university name: ";
        cin >> uni_name;
        cout << "Enter year of admission: ";
        cin >> adm_year;
        cout << "Enter faculty: ";
        cin >> faculty;
    }

    void print() const
    {
        cout << "University: " << uni_name << ", Admission year: " << adm_year << ", Faculty: " << faculty << endl;
    }
};

class student : public Person, public University
{
private:
    string group;

public:
    student() = default;
    student(const string n, const int a, const string u, const int e, const string f, const string g) : Person(n, a), University(u, e, f), group(g) {}

    void input()
    {
        Person::input();
        University::input();
        cout << "Enter your group: ";
        cin >> group;
    }

    void print() const
    {
        Person::print();
        University::print();
        cout << " Your group: " << group << endl;
    }
};

int main()
{
    student st;
    st.input();
    st.print();

    return 0;
}
