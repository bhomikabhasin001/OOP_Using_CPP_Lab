/*Employee Salary Slip Generator 
Concepts: Constructor overloading, array of objects, computation logic 
Problem: 
Define a class Employee with data members id, name, basicSalary, hra, da, and netSalary. 
• Overload constructors: one default and one parameterized. 
• Store records of n employees in an array. 
• Calculate and display netSalary = basicSalary + hra + da. 
• Display employee(s) earning above ₹50,000. */

#include<iostream>
#include<string>
using namespace std;
class Employee{
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float netSalary;
    public:
    Employee(){
        id=0; name="0"; basicSalary=0; hra=0; da=0; netSalary=0;        
    }
    Employee(int i, string n, float bS, float h, float d, float nS){
        id=i;
        name=n;
        basicSalary=bS;
        hra=h;
        da=d;
        netSalary=nS;
    }
    void getData(){
        cout<<"Enter Employee Id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter Basic Salary:"<<endl;
        cin>>basicSalary;
        cout<<"Enter HRA:"<<endl;
        cin>>hra;
        cout<<"Enter DA:"<<endl;
        cin>>da;
        netSalary=basicSalary+hra+da;
    }
    void display(){        
        cout<<"\nEmployee Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Basic Salary:"<<basicSalary<<endl;
        cout<<"HRA:"<<hra<<endl;
        cout<<"DA:"<<da<<endl;
        cout<<"Net Salary:"<<netSalary<<endl;
    }
    float getNetsalary(){
        return netSalary;
    }
};

int main(){
    int n;
    cout<<"\nEnter the number of employees:"<<endl;
    cin>>n;
    Employee* e = new Employee[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter details for Employee"<<i+1<<":"<<endl;
        e[i].getData();
    }
    for(int i=0;i<n;i++){
        cout<<"---- Employees Details ----";
        e[i].display();
    }
    cout<<"\n-----Employees earning more than 50000:-----\n";
    bool found=false;
    for(int i=0;i<n;i++){
        if (e[i].getNetsalary()>50000){
            e[i].display();
            found=true;
        }
    }
    if(!found){
        cout<<"\nNo employee earns more than 50000";
    }
    delete []e;
    return 0;
}