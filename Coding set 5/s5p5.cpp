/*Inventory Stock Update 
Concepts: Array of objects, operator overloading 
Problem: 
Define a class Item with members: code, name, and quantity. 
• Overload the + operator to add quantities of items with the same code. 
• Create an array of items. 
• Merge stock from two inventories (two arrays of objects) into a third array. 
Hint: 
Use operator overloading with an array-based merging logic. */
#include<iostream>
#include<string>
using namespace std;
class Item{
    public:
    int code;
    string name;
    int quantity;
    Item(){
        code=0;
        name="unknown";
        quantity=0;
    }
    Item(int c,string n,int q){
        code=c;
        name=n;
        quantity=q;
    }
    Item operator+(Item i) {
        Item temp;
        if (code == i.code) {
            temp.code = code;
            temp.name = name;
            temp.quantity = quantity + i.quantity;
        }
        return temp;
    }
    void display() {
        cout << "\nCode: " << code
             << "\nName: " << name
             << "\nQuantity: " << quantity << endl;
    }
};
int main() {
    int n1, n2;
    cout<<"Enter number of items in Inventory 1: ";
    cin>>n1;
    Item in1[n1];
    for (int i=0;i<n1;i++) {
        int c, q;
        string n;
        cout<<"\nEnter code, name, quantity: ";
        cin>>c>>n>>q;
        in1[i]=Item(c, n, q);
    }
    cout<<"\nEnter number of items in Inventory 2: ";
    cin>>n2;
    Item in2[n2];
    for(int i=0;i<n2;i++) {
        int c, q;
        string n;
        cout<<"\nEnter code, name, quantity: ";
        cin>>c>>n>>q;
        in2[i]=Item(c, n, q);
    }
    Item merged[20];
    int k=0;
    for(int i=0;i<n1;i++) {
        merged[k++]=in1[i];
    }
    for(int i=0; i<n2;i++) {
        bool found=false;
        for(int j=0;j<k;j++) {
            if(merged[j].code==in2[i].code) {
                merged[j]=merged[j]+in2[i];
                found=true;
                break;
            }
        }
        if(!found){
            merged[k++]=in2[i];
        }
    }
    cout<<"\n--- Merged Inventory ---\n";
    for (int i=0;i<k;i++) {
        merged[i].display();
    }
    return 0;
}