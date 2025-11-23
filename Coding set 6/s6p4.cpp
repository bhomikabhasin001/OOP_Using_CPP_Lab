// Multi-level Inheritance
/* Create three classes- Person, Employee and Manager-
where Employee inherits from Person and Manager inherits from Employee.
Each class should add one extra data member and display all details.*/

#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    int age=40;
    string name="abc";   
};
class Employee: public Person{
    public:
    int id=34;
};
class Manager: public Employee{
    public:
    int salary=50000;
    void display(){
        cout<<"\nAge:"<<age<<"\nName:"<<name<<"\nId:"<<id<<"\nSalary:"<<salary;
    }
};
int main(){
    Manager M1;
    M1.display();
    return 0;
}