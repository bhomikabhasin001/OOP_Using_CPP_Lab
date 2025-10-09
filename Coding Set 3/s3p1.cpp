//   Basic Class Definition
/* Create a class Student with two data members:roll no and name.
Write a program to:
1. Create on object of class.
2. Assign values to its data members.
3.Display the values.*/


#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
};

int main(){
    Student S1;
    S1.rollno=1;
    S1.name="ABC";
    cout<<"Roll no.:"<<S1.rollno<<endl;
    cout<<"Name:"<<S1.name<<endl;
    return 0;
}

