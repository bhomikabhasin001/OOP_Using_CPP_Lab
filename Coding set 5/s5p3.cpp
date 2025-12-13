/*Library Book Management 
Concepts: Array of objects, searching, string handling 
Problem: 
Create a class Book with members: bookID, title, author, and price. 
• Read details for n books into an array. 
• Implement a function to search for a book by author name. 
• Display all books written by that author.*/

#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    int bookID;
    string title;
    string author;
    float price;
    Book(){
        bookID=0; title="unknown"; author="unknown"; price=0.00;
    }
    Book(int i, string t, string a, float p){
        bookID=i; title=t; author=a; price=p;
    }
    void setData(){
    cout<<"Enter BookID: ";
    cin>>bookID;
    cout<<"Enter Title: ";
    cin>>title;
    cout<<"Enter Author: ";
    cin>>author;
    cout<<"Enter Price: ";
    cin>>price;
}
void display(){
    cout<<"\n--- Book Details ---";
    cout<<"\nBookID: "<<bookID;
    cout<<"\nTitle: "<<title;
    cout<<"\nAuthor: "<<author;
    cout<<"\nPrice: "<<price<<endl;
}
    string getAuthor(){
        return author;
    }
};
void searchByAuthor(Book b[], int n, string authorName) {
    bool found=false;
    for (int i=0;i<n;i++) {
        if (b[i].getAuthor()==authorName) {
            b[i].display();
            found = true;
        }
    }
    if(!found){
        cout<<"\nNo books found by author:"<<authorName<<endl;
    }
}
int main() {
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Book* books = new Book[n];
    for (int i=0;i<n;i++) {
        cout<<"\nEnter details of book "<<i+1<< endl;
        books[i].setData();
    }
    string searchAuthor;
    cin.ignore();
    cout << "\nEnter author name to be searched: ";
    getline(cin,searchAuthor);
    searchByAuthor(books,n,searchAuthor);
    delete[] books;
    return 0;   
}