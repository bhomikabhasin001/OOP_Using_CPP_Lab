// Constructors
/* Create a class Employee with data members id and salary.
Write a parameterized constructor to initialize data members.
create two objects and display their details.*/

#include<iostream>
#include<string>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    Employee(int i, int s){
        id=i;
        salary=s;
    }
    void display(){
        cout<<"Details of Employee:\n";
        cout<<"Employee id:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
int main(){
    Employee E1(1,20000),E2(2,15000);
    E1.display();
    E2.display();
    return 0;
}