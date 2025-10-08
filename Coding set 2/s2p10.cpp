/* Write a program to dynamically allocate memory for an integer
array of size n, input elements and find their average
using pointers.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array:";
    cin>>n;
    int*arr=new int[n];
    cout<<"Enter "<<n<<"elements:\n";
    for(int i=0;i<n;i++){
        cout<<"Element"<<i+1<<":";
        cin>>*(arr+i);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }
    float average=static_cast<float>(sum)/n;
    cout<<"Average of elements:"<<average;
    delete[]arr;
    return 0;
}