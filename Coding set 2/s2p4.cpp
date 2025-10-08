/* Input two 2D matrices(size m*n) and find their sum.
 Pass the 2D arrays to a function using pointers */

 #include<iostream>
 #include<string>
 using namespace std;
 void addMatrices(int*m1, int*m2, int *result, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *(result+i*n+j) = *(m1+i*n+j) + *(m2+i*n+j);
        }
    }
 }
 void display(int *mat, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(mat+i*n+j)<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int m,n;
    cout<<"Enter the number of rows and column:\n";
    cin>>m>>n;
    int m1[m][n],m2[m][n],result[m][n];
    cout<<"Enter the elements of the first matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>m2[i][j];
        }
    }
    addMatrices((int*)m1,(int*)m2,(int*)result,m,n);
    cout<<"Sum of two matrices:\n";
    display((int*)result,m,n);
    return 0;
}
