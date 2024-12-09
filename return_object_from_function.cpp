#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int age;
        int roll;
        char section;


        Student(char * n, int ag , int r, char sec){
            strcpy(name, n);
            age = ag;
            roll = r;
            section = sec;
        };
};

Student obj(){
    char name[100] = "Rahim Molla";
    Student rahim(name, 21, 3, 'KHA');
    return rahim;
};

int main(){
     
     Student s = obj();
     cout << "Name: " << s.name << endl;
     cout << "Age: " << s.age << endl;
     cout << "Roll: " << s.roll << endl;
     cout << "Section: " << s.section << endl;
    return 0;
}