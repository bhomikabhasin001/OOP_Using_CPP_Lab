/*Problem-7  throwOnZero (throw/catch basic)
Objective- Read integer x. if x==0 print "caught zero" using catch and throw otherwise print "ok".*/

#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int x;
    cout<<"enter a value:"<<endl;
    cin>>x;
    try{
        if(x!=0){
            cout<<"Ok";
        }
        if(x==0){
            throw "caught zero";
        }
    }
    catch(const char* msg){ 
        cout<<msg; 
    }
}