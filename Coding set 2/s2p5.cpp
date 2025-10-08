// Program to find the transpose of a given n*n matrix using pointer notation

#include<iostream>
#include<string>
using namespace std;
void transposeMatrix(int *matrix, int *transpose, int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            *(transpose+j*n+i) = *(matrix+i*n+j);
        }
    }
}
void display(int *matrix,  int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<*(matrix+i*n+j)<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n; 
    cout<<"Enter the order of the square matrix:";
    cin>>n;
    int matrix[n][n],transpose[n][n];
    cout<<"Enter the elements of the matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    transposeMatrix((int*)matrix,(int*)transpose,n);
    cout<<"your matrix is:\n";
    display((int*)matrix,n);
    cout<<"transpose is:\n";
    display((int*)transpose,n);
    return 0;

}

