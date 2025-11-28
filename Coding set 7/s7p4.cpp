/* Problem 4 — scale(Function template) 
Objective: Implement scale<T>(arr<T>& v, T factor) that multiplies every 
element by factor. Read array, scale, print result. 
Input: type n, then n elements, then factor. 
Output: scaled elements space-separated.*/ 

#include<iostream>
#include<string>
using namespace std;
template<typename T>
void scale(T arr[], int n, T factor){
    for(int i=0;i<n;i++){
        arr[i]*=factor;
    }
}
int main(){
    string type;
    cout<<"Enter type(int or double):";
    cin>>type;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    if(type=="int"){
        int arr[n],factor;
    cout<<"enter elements:";
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter factor:";
    cin>>factor;
    scale<int>(arr,n,factor);
    cout<<"Scaled elements of array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
    if(type=="double"){
        double arr[n],factor;
    cout<<"enter elements:";
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter factor:";
    cin>>factor;
    scale<double>(arr,n,factor);
    cout<<"Scaled elements of array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
}
