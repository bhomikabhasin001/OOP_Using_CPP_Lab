/*Write a program to input and print elements of a 3×3×3 cube
using only pointers*/

#include<iostream>
using namespace std;
int main(){
    const int a=3,b=3,c=3;
    int cube[a][b][c];
    int*ptr=(int*)cube;
    cout<<"Enter elements for cube:\n";
    for(int i=0;i<a*b*c;++i){
        cout<<"element"<<i<<":";
        cin>>*(ptr+i);
    }
    cout<<"The  elements are:\n";
    for(int i=0;i<a;++i){
        cout<<"Layer"<<i<<":\n";
        for(int j=0;j<b;++j){
            for(int k=0;k<c;++k){
                int index=i*b*c+j*c+k;
                cout<<*(ptr+index)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
