#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
      char name[100];
      int roll;
      int clss;
      char section;

};
int main(){
    Student s1;
    s1.clss=7;
    s1.roll=27;
    s1.section='A';
    strcpy(s1.name, "karim Reza");

    cout<<s1.name<<endl;
    cout<<s1.roll<<endl; 
    cout<<s1.section<<endl; 
    return 0;
}