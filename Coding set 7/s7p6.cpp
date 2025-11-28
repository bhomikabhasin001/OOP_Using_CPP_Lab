/*Problem 6 — safeDiv (simple) 
Objective: Read two integers a b. If b==0 print Error (without throwing), otherwise 
print a/b. (This is warm-up — no throw required.)*/

#include<iostream>
using namespace std;
int main(){
    double a,b; double c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    if(b==0){
        cout<<"Error:can't divide by 0";
    }
    else {
        c=a/b;
        cout<<"after division: value is:"<<c;
    }
    return 0;
}