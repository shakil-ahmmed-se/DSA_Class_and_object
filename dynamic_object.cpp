#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int age;
    char section;

    Student(char *n, int r, int ag, char sec)
    {
        strcpy(name, n);
        roll = r;
        age = ag;
        section = sec;
    };
};

int main()
{
    Student *s = new Student("Rana", 10, 26, 'z');
    cout << "Name: " << s->name << endl;
    cout << "Roll: " << s->roll << endl;
    cout << "Age: " << s->age << endl;
    cout << "Section: " << s->section << endl;
    delete s;
    cout << "After delete object" << endl;
    cout << "Name: " << s->name << endl;
    cout << "Roll: " << s->roll << endl;
    cout << "Age: " << s->age << endl;
    cout << "Section: " << s->section << endl;
    return 0;
}