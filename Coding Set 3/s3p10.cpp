// Mini Project-Student Report Card
/* Create a class Report with:
Data members: name,roll no,marks[5].
Member functions:
Input(): to take details from user.
Display(): ro show details.
calculateGrade():to calculate total,percentage,and grade(A,B,C,Fail).
Write a program to create multiple objects of Report and display the report card for each student.*/

#include<iostream>
#include<string>
using namespace std;
class Report{
    string name;
    int rollno;
    int marks[5];
    public:
    Report(){
        name=" ";
        rollno=0;
        for(int i=0;i<5;i++){
            marks[i]=0;
        }
    }
    Report(string n, int r, int m[5]){
        name=n;
        rollno=r;
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
    }

    void input(){
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter Rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter Marks for 5 subjects:";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }

    void display(){
        cout<<"Report card of student:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Marks:";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
    }

void calculateGrade(){
    int totalMarks=0;
    for(int i=0;i<5;i++){
        totalMarks+=marks[i];
    }
    cout<<"Total Marks are:"<<totalMarks<<endl;

    float percentage= (totalMarks/500.0)*100.0;
    cout<<"Percentage is:"<<percentage<<"%"<<endl;

    char grade;
    if(percentage>=80){
        grade = 'A';
    }
    else if(percentage>=65){
        grade='B';
    }
    else if(percentage>=50){
        grade='C';
    }
    else {  grade='F';
    }
    cout<<"Grade is:"<<grade<<endl;   
}
};
int main(){
    int n;
    cout<<"Enter no of students:"<<endl;
    cin>>n;
    Report R[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details of student"<< i+1 <<":"<<endl;
        R[i].input();
    }
    for(int i=0;i<n;i++){
        R[i].display();
        R[i].calculateGrade();
    }
    return 0;
}