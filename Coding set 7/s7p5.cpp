/*Problem 5 — StringBox (Class template with string only) 
Objective: Implement Box<T> but test with T = string. Class stores a value, set and 
get. Read one string, store it, then print from get(). 
Input: one word (no spaces). Output: the same word.*/

#include<iostream>
using namespace std;
template<typename T>
class Box{
    public:
    T value;
    void setValue(T a){
        value=a;
    }
    void getValue(){
        cout<<"Value is:"<<value;
    }
};
int main(){
    string s;
    cout<<"enter input(one word-no space)";
    cin>>s;
    Box<string>B;
    B.setValue(s);
    B.getValue();
    return 0;
}