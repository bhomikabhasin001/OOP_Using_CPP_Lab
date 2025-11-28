/*Problem 2 — sumArray (Function template) 
Objective: Implement sumArray as a function template that returns sum of n elements 
of a vector. Types allowed: int or double. 
Input: First line: type and n. Second line: n numbers. 
Output: Sum (same type as input).*/


#include<iostream>
#include<string>
using namespace std;
template<typename T>
T sumArray(T arr[], int n){
    T sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    } return sum;
}
int main(){
    string type;
    cout<<"Enter the type: int or double:"<<endl;
    cin>>type;
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    if(type=="int"){
        int arr[n];
        cout<<"enter the elements:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sumArray(arr ,n);
        cout<<"Sum :"<<sumArray(arr ,n);
    }
    else if(type=="double"){
        double arr[n];
        cout<<"enter the elements:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sumArray(arr ,n);
        cout<<"Sum :"<<sumArray(arr ,n);
    } else{cout<<"invalid type entered:";}
    return 0;
}