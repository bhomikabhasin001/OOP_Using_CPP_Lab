// Program to reverse an array of size n using pointers

#include<iostream>
#include<string>
using namespace std;
void reverseArray(int *start, int n){
    int *end = start + n-1;
    while(start<end){
        int temp=*start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
void display(int *p , int n){
    for(int i=0;i<n;i++){
    cout<<*(p+i)<<" ";
    }
    cout<<"\n";
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int array[n];
    cout<<"enter element:\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Original Array is:";
    display(array,n);
    reverseArray(array,n);
    cout<<"Reversed Array is:";
    display(array,n);
    return 0;
}