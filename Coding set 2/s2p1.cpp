// Find max and min using function that takes an array pointer as parameter

#include<iostream>
#include<string>
using namespace std;
int Maximum(int* arr, int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int Minimum(int* arr, int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    cout<<"Maximum value is : "<<Maximum(arr,n)<<"\n";
    cout<<"Minimum value is : "<<Minimum(arr,n)<<"\n";
}












