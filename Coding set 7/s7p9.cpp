/* Problem 9 — boundedPush (stack with exception message) 
Objective: Implement very small stack with capacity cap (cap ≤ 5). Read cap, then m 
commands (push x or pop). On push when full print Full (use exception or if-check). On 
pop when empty print Empty, otherwise print popped value.
Input example: 
2 4 
push 1 
push 2 
push 3 
pop 
Output: 
Full 
2 */

#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
int main(){
    int cap, m;
    cout<<"Enter capactiy of stack:";
    cin>>cap;
    cout<<"Enter number of commands:";
    cin>>m;
    int stack[5];
    int top=-1;
    for(int i=0; i<m; i++){
        string command;
        cin>>command;
        if(command=="push"){
            int x;
            cin>>x;
            if(top+1>=cap){
                cout<<"full"<<endl;
            } else{
                stack[++top]=x;
            }
        }else if(command=="pop"){
            if(top==-1){
                cout<<"empty";
            } else{
                cout<<stack[top--]<<endl;
            }
        }
    }
    return 0;
}