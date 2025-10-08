/*Create an array of string pointers(eg., names of 5 students)
and print them using pointer notation.*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    const char*students[5]={"Rahul","Laksh","Diya","Sunita","Vivek"};
    const char**ptr=students;
    cout<<"student:\n";
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<"\n";
    }
    return 0;
}