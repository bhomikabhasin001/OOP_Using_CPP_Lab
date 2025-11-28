/*Problem 1 — printTwo (Function template) 
Objective: Write a function template printTwo that prints two values (of the same 
type) separated by a space. 
Input: First token: type (int/double/string), then two values. 
Output: The two values separated by a space. */

#include<iostream>
#include<string>
using namespace std;
template<typename T>
void printTwo(T a, T b) {
    cout<<""<<a;
    cout<<"\n"<<b;
}
int main(){
    string type;
    cout<<"type(int,double,string):";
    cin>>type;
    if(type=="int"){
        int a,b;
        cin>>a>>b;
        printTwo(a,b);
    }
    else if(type=="double"){
        double a,b;
        cin>>a>>b;
        printTwo(a,b);
    }
    else if(type=="string"){
        string a,b;
        cin>>a>>b;
        printTwo(a,b);
    }
    else{
        cout<<"Invalid type ";
    }
    return 0;
}
