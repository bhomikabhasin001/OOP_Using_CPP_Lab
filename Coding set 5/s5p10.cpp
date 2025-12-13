/* Student Result Ranking System 
Concepts: Array of objects, sorting, encapsulation, file handling (optional) 
Problem: 
Design a class Student with members: 
rollNo, name, marks[3], total, and grade. 
• Calculate total and grade (A for ≥90, B for 80–89, etc.). 
• Sort the array by total marks (descending order). 
• Display the rank list (1st, 2nd, 3rd...). 
• (Optional) Write the rank list to a text file. 
Hint: 
Use encapsulation (private members, public access functions). 
Use a sorting algorithm and maintain ranks dynamically.*/


#include <iostream>
#include <string>
using namespace std;
class Student {
    private:
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;
    public:
    void setData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        total = 0;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        float average = total / 3.0;
        if (average>=90){
            grade='A';
        } else if (average>=80){
            grade='B';
        } else if (average>=70){
            grade='C';
        } else if (average>=60){
            grade='D';
        } else {
            grade='F';
        }
    }
    void display(int rank){
        cout<<rank<<"-Roll No:"<<rollNo;
        cout<<"--Name:"<<name;
        cout<<"--Total:"<<total; 
        cout<<"--Grade:"<<grade<<endl;
    }
    int getTotal(){
        return total;
    }
};
void sortStudents(Student s[], int n){
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(s[i].getTotal()<s[j].getTotal()) {
                Student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    for (int i=0;i<n;i++) {
        cout<<"\nEnter details for student"<<i+1<< ":\n";
        s[i].setData();
    }
    sortStudents(s, n);
    cout<<"\n--- Rank List ---\n";
    for(int i=0;i<n;i++){
        s[i].display(i+1);
    }
    return 0;
}
