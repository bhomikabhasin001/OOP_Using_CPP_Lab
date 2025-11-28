/* Problem 10 — openTxt (simple file-type check) 
Objective: Read a filename string. If it ends with .txt print OK; else throw and catch a 
custom exception and print Not txt. Implement a small custom exception class with 
what() returning "Not txt". 
Input: filename (single token).*/

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
class NotTxtException : public runtime_error {
public:
    NotTxtException() : runtime_error("Not txt") {}
};
void checkFileType(const string& filename) {
    if (filename.length()>=4 && filename.substr(filename.length()-4)==".txt") {
        cout<<"OK"<<endl;
    } else {
        throw NotTxtException();
    }
}
int main() {
    string fileName;
    cout<<"Enter name of file:";
    cin>>fileName;
    try {
        checkFileType(fileName);
    } 
    catch(const NotTxtException& e) {
        cout<<e.what()<<endl;
    }
    return 0;
}
