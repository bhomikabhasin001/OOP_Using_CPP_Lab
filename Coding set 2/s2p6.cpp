/*Given a 2D array of integers. Write a program to find maximum
element of each row using pointers.*/

#include<iostream>
using namespace std;
void rowMax(int *matrix, int m, int n){
    for(int i=0;i<m;i++){
        int max=*(matrix+i*n+0);
        for(int j=1;j<n;j++){
            if(*(matrix+i*n+j)>max){
                max=*(matrix+i*n+j);
            }
        }
        cout<<"maximum element in row "<<i+1<<":"<<max;
    }
}
int main(){
    int m,n; 
    cout<<"enter the no. of rows of matrix:";
    cin>>m;
    cout<<"enter the no. of columns of matrix:";
    cin>>n;
    int matrix[m][n];
    cout<<"Enter the elements of the matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    rowMax((int*)matrix,m,n);
    return 0;
}