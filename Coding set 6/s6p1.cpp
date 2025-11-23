// Basic Inheritance: Display Information
/*Create a class Person with data members name and age.
Derive class Student from Person that adds data member course.
Write a program to input and display details of student.*/


#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student: public Person {
    public:
    string course;
    void display(){
        cout<<"\nName:"<<name<<"\nAge:"<<age<<"\nCourse:"<<course<<endl;
    }
};
int main(){
    Student S1;
    S1.name="Parul";
    S1.age=19;
    S1.course="C++";
    S1.display();
    return 0;
}