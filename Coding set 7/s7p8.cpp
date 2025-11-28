/* Problem 8 — parsePositive (validation with exception) 
Objective: Read one integer as string. If it is negative (starts with -), throw 
invalid_argument and catch to print Negative not allowed. Otherwise print the 
number.(You may use stoi inside try-catch.) */ 

#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
int main(){
    string s;
    cout<<"Enter an integer:";
    cin>>s;
    try{
        if(s[0]=='-'){
            throw invalid_argument("Negative not allowed");
        }
        int number = stoi(s);
        cout<<number;
    } catch(const invalid_argument&e){
        cout<<e.what();
    }
    return 0;
}