/*Input elements of a 2×2×2 3D array and find the sum of all 
elements using pointers artihmetic.*/

#include<iostream>
using namespace std;
int main(){
    const int a=2,b=2,c=2;
    int arr[a][b][c];
    int*ptr=(int*)arr;
    cout<<"enter elements for array:\n";
    for(int i=0;i<a*b*c;i++){ 
        cout<<"Element"<< i <<":";
        cin>>*(ptr+i);
    }

    int sum=0;
    for(int i=0;i<a*b*c;i++){
        sum+=*(ptr+i);
    }
    cout<<"Sum of elements:\n"<<sum<<endl;
    return 0;
}   