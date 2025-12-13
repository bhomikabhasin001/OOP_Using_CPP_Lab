/*Student Result Management System 
Concepts: Array of objects, data input/output, aggregation logic 
Problem: 
Create a class Student with members: rollNo, name, marks[5], and total. 
• Use an array of Student objects to store data of n students. 
• Calculate and display the total marks and the student with the highest total. 
Hint: 
Loop through array, call member functions for input and calculation.*/

#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int rollNo;
    string name;
    int marks[5]; 
    int total;    
    Student(){
        rollNo=0;
        name="0";
        for(int i=0;i<5;i++){
            marks[i]=0;
        }
        total=0;
    }
    Student(int r, string n,int  m[5], int t){
        rollNo=r;
        name=n;
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
        total=t;
    }
    void getData(){
        cout<<"\nEnter Roll No:";
        cin>>rollNo;
        cout<<"Enter name:";
        cin>>name;
        for(int i=0;i<5;i++){
            cout<<"Enter marks for" <<i+1<<"subject:";
            cin>>marks[i];
            total+=marks[i];;
        }        
    }
    void display(){
        cout<<"Student details:\n";
        cout<<" Roll no:"<<rollNo<<endl;
        cout<<" Name:"<<name<<endl;       
        cout <<"Total Marks:"<<total<<endl;
    }
};
int main(){
    int n;
    cout<<"\nEnter the number of student:"<<endl;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<"\n Enter details for student"<<(i+1)<<":";
        s[i].getData();
    }
    for (int i=0;i<n;i++) {
        s[i].display();
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(s[i].total>s[max].total){
            max=i;
        }
    }
    cout<<"\nStudent with highest total marks:"<<endl;
    s[max].display();
    return 0;
}