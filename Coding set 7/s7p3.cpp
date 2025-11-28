/* Problem 3 — MinMaxPair (Simple class template) 
Objective: Create a class template MinMax<T> that stores two values (minVal, maxVal) 
and has a constructor taking two T values and a print() method to print them as min max.
Input: type and two values. 
Output: min max (use the given values as they are — no need to compute min/max). */

#include<iostream>
using namespace std;
template<typename T>
class MinMax{
    public:
    T min,max;
    MinMax(T a, T b){
        min=a;
        max=b;
    }
    void display(){
        cout<<"Minimum value:"<<min;
        cout<<"Maximum value:"<<max;
    }
};
int main(){
    string type;
    cout<<"Enter type:int or double:";
    cin>>type;
    if(type=="int"){
        int a,b;
        cin>>a>>b;
        MinMax<int>M(a,b);
        M.display();
    }
    else if(type=="double"){
        double a,b;
        cin>>a>>b;
        MinMax<double>M(a,b);
        M.display();
    }
}
