/*write a program to find sum of even elements and odd elements
 separately using pointer aritmetic*/

#include<iostream>
#include<string>
using namespace std;
void Sum(int*arr,int n, int*evenSum, int*oddSum){
    *evenSum=0;
    *oddSum=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)%2==0){
            *evenSum+= *(arr+i);
        }
        else{
            *oddSum+= *(arr+i);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the no of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even_Sum,odd_Sum;
    Sum(arr,n, &even_Sum, &odd_Sum);
    cout<<"Sum of even numbers:"<<even_Sum<<endl;
    cout<<"Sum of odd numbers:"<<odd_Sum<<endl;
    return 0;
}