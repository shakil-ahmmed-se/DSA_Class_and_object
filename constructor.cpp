#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll ;
        int age;
        char section;

        Student(char * n, int r , int ag, char sec){
            strcpy(name, n);
            roll = r;
            age = ag;
            section = sec;
        };
};

int main(){
     Student s1("Benjama Karim", 20 , 18,'B' );
     cout << "Student Name: " << s1.name << endl;
     cout << "Student Roll: " << s1.roll << endl;
     cout << "Student Age: " << s1.age << endl;
     cout << "Student Section: " << s1.section << endl;
    return 0;
}