// Using protected members
/* Create a class Employee with protected data members id and salary.
Derive a class Manager that sets and displays these details through member function.*/


#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
    int id;
    int salary;
    public:
    Employee(int i, int s){
        id=i;
        salary=s;
    }
};
class Manager: public Employee{
    public:
    Manager(int i, int s) : Employee(i, s){}
    void display(){
        cout<<"\nId:"<<id<<"\nSalary"<<salary<<endl;
    }
};
int main(){
    Manager M1(100, 50000);
    M1.display();
    return 0;
}