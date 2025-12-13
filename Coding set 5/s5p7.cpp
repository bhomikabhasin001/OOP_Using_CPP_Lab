/*Car Dealership Records 
Concepts: Array of objects, aggregation, string matching 
Problem: 
Make a class Car with data members: model, company, price.  
• Store n car objects. 
• Display all cars of a particular company. 
• Find and display the most expensive car in the array.*/
#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    int model;
    string company;
    int price;
    void set(){
        cout<<"Enter model no:";
        cin>>model;
        cout<<"Enter company name:";
        cin>>company;
        cout<<"Enter price:";
        cin>>price;
    }
    void display(){
        cout<<"\n---Car detais---";
        cout<<"\nModel no:"<<model;
        cout<<"\nCompany:"<<company;
        cout<<"\nPrice:"<<price;
    }
};
int main(){
    int n;
    cout<<"Enter number of cars: ";
    cin>>n;
    Car c[n];
    for(int i=0;i<n;i++) {
        cout<<"\nEnter details of car "<<i+1<<endl;
        c[i].set();
    }
    string companyName;
    cout<<"\nEnter company name to display cars: ";
    cin>>companyName;
    cout<<"\nCars of company "<<companyName<<":\n";
    for (int i=0;i<n;i++) {
        if(c[i].company==companyName) {
            c[i].display();
        }
    }
    int max=c[0].price;
    int amount=0;
    for(int i=1;i<n;i++) {
        if(c[i].price>max) {
            max=c[i].price;
            amount=i;
        }
    }
    cout<<"\n\nMost Expensive Car:";
    c[amount].display();
    return 0;
}