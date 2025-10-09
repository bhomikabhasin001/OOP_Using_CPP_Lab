// Multiple objects
/* Create a class Book with data members title,author and price. Write a program
to create three objects of Book, initialize them with user input
and display their details.*/

#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    float price;
    

    void inputData(){
        cout<<"Enter Title:";
        cin>>title;
        cout<<"Enter Author:";
        cin>>author;
        cout<<"Enter Price:";
        cin>>price;
    }

    void display(){
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main(){
    Book b1,b2,b3;
    cout<<"Enter details of Book 1:"<<endl;
    b1.inputData();
    cout<<"Enter details of Book 2:"<<endl;
    b2.inputData();
    cout<<"Enter details of Book 3:"<<endl;
    b3.inputData();

    cout<<"Book 1 details are:"<<endl;
    b1.display();
    cout<<"Book 2 details are:"<<endl;
    b2.display();
    cout<<"Book 3 details are:"<<endl;
    b3.display();
    return 0;
}
