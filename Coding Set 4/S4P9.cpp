// Returning object from member function
/* Define a class Matrix with a 2×2 array. Create a member function add(Matrix &m)
that returns the sum as a new Matrix object(by value).*/

#include<iostream>
using namespace std;
class Matrix{
    int mat[2][2];
    public:
    Matrix(){
        mat[0][0]=0;
        mat[0][1]=0;
        mat[1][0]=0;
        mat[1][1]=0;
    }
    Matrix(int a , int b, int c, int d){
        mat[0][0]=a;
        mat[0][1]=b;
        mat[1][0]=c;
        mat[1][1]=d;
    }
 Matrix add(const Matrix &m) {
        Matrix result; 
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.mat[i][j] = this->mat[i][j] + m.mat[i][j];
            }
        }
        return result; 
    }
    void display(){
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << mat[i][j] << " ";
            }
            cout<<endl;
        }
    }
};

int main() {
    Matrix m1(3,6,5,4);
    Matrix m2(1,5,9,3);
    cout << "Matrix 1:" << std::endl;
    m1.display();
    cout << "Matrix 2:" << std::endl;
    m2.display();
    Matrix sumMatrix = m1.add(m2); 
    cout << "Sum Matrix:" << std::endl;
    sumMatrix.display();
    return 0;
};