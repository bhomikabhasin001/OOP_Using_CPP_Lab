// The Diamond Problem
/*Create a class Person, derive Teacher and Student from it, and then
derive a class TA from BOth TEacher and Student.
Demonstrate diamond problem and resolve it using virtual inheritance.*/


#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    Person(string n){
        name=n;
    }
};
class Teacher:virtual public Person{
    public:
    string subject;
    Teacher(string s, string n): Person(n){
        subject=s;
    }
};
class Student:virtual public Person{
    public:
    int id;
    Student(int i, string n): Person(n){
        id=i;
    }
};
class TA:public Teacher, public Student{
    public:
    string work;
    TA(string w,int i,string s,string n):Person(n), Teacher(s,n), Student(i,n) {
        work=w;
    }
    void display(){
        cout<<"Name:"<<name<<"\nID:"<<id<<"\nSubject:"<<subject<<"\nWork:"<<work<<endl;
    }
};
int main(){
    TA ta("Lab Assistant",12,"CPP","Rahul");
    ta.display();
}