// Combination Examples
/*Create a class Employee(id,salary). add two functions:
1.A member function updateSalary(Employee &e) that couples salary from another employee.
2.A non member function swap(Employee*e1, Employee*e2) that swaps salaries 
of two employees using pointers.*/

#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    Employee(){
        id=0;salary=0;
    }
    Employee(int i,int s){
        id=i;
        salary=s;
    }
    void display(){
        cout<<"Employee id:"<<id<<"and"<<"Salary:"<<salary<<endl;
    }
     void updateSalary(Employee &e) {
        salary = e.salary;
    }
    friend void swap(Employee* e1, Employee* e2); 
};
void swap(Employee* e1, Employee* e2) {
    int temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}
int main(){
Employee e1(1, 20000);
    Employee e2(2, 30000);
    cout << "Initial employees:" << endl;
    e1.display();
    e2.display();
    cout << "\nAfter update:" << endl;
    e1.updateSalary(e2);
    e1.display();
    e2.display();
    e1 = Employee(1, 50000);
    cout << "\nBefore swapping salaries using the friend function:" << endl;
    e1.display();
    e2.display();
    cout << "\nAfter swapping salaries using the friend function:" << endl;
    swap(&e1, &e2);
    e1.display();
    e2.display();
    return 0;
}
