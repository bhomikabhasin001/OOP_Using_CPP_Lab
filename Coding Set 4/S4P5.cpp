// Mixed Parameters
/* Define a class Student(name,marks).Write a non member function
compare(const Student &s1, const student &s2) that takes objects by reference
and returns the one with higher marks by value.*/


#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(string n, int m){
        name=n;
        marks=m;
    }
};
const Student& Compare(Student &s1, Student &s2){
    if(s1.marks>s2.marks){
        return s1;
    } else{
        return s2;
    }
}
int main(){
    Student s1("abc",89);
    Student s2("xyz",98);
    const Student& high = Compare(s1,s2);
    cout<<"Student with higher marks is:"<<high.name<<" and marks:"<<high.marks<<endl;
    return 0;
}