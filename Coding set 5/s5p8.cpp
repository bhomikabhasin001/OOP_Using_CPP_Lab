/*Online Shopping Cart 
Concepts: Array of objects, composition, discount logic 
Problem: 
Define a class Product with attributes: id, name, price, discount. 
• Create an array of objects representing cart items. 
• Compute the total amount payable after applying discounts. 
• Display products sorted by final price (after discount). 
Hint: 
Use (price - (price * discount / 100)) for each product. 
Implement a function to compute the total bill.*/

#include<iostream>
#include<string>
using namespace std;
class Product {
public:
    int id;
    string name;
    float price;
    float discount;
    Product() {
        id = 0;
        name = "";
        price = 0;
        discount = 0;
    }
    void setData() {
        cout<<"Enter Product ID: ";
        cin>>id;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Enter Discount (%):";
        cin>>discount;
    }
    float finalPrice(){
        return price-(price*discount/100);
    }
    void display(){
        cout<<"\nID:"<<id;
        cout<<"\nName:"<<name;
        cout<<"\nPrice:"<<price;
        cout<<"\nDiscount:"<<discount<<"%";
        cout<<"\nFinal Price:"<<finalPrice();
    }
};
float totalBill(Product cart[], int n) {
    float total=0;
    for (int i=0;i<n;i++) {
        total+=cart[i].finalPrice();
    }
    return total;
}
void sortByFinalPrice(Product cart[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(cart[i].finalPrice()>cart[j].finalPrice()) {
                Product temp=cart[i];
                cart[i]=cart[j];
                cart[j]=temp;
            }
        }
    }
}
int main() {
    int n;
    cout<< "Enter number of products in cart: ";
    cin>>n;
    Product cart[n];
    for (int i=0;i<n;i++) {
        cout << "\nEnter details for product " << i+1 << ":\n";
        cart[i].setData();
    }
    cout << "\n--- Products in Cart ---\n";
    for (int i=0;i<n;i++) {
        cart[i].display();
    }
    float total=totalBill(cart, n);
    cout<<"\nTotal Bill after discounts: "<<total<<endl;
    sortByFinalPrice(cart, n);
    cout << "\n--- Products sorted by final price ---\n";
    for (int i=0;i<n;i++) {
        cart[i].display();
    }
    return 0;
}

