// Call by pointer(Member function)
/* Define a class Account(balance). add a member function transfer(Account *acc, int amount)
that transfers money from the calling onject to the account pointed by acc. */

#include<iostream>
using namespace std;
class Account{
    float balance;
    public:
    Account(){
        balance=0;
    }
    Account(float b){
        balance=b;
    }
    void display(){
        cout<<"Balance:"<<balance<<endl;
    }
    void transfer(Account *acc,int amount){
        if (balance>=amount){
            balance-=amount;
            acc-> balance+=amount;
        }
    }
};
int main(){
    Account acc1(2000);
    Account acc2(1000);
    cout << "Before transfer:" << endl;
    acc1.display();
    acc2.display();
    acc1.transfer(&acc2, 500); 
    cout << "\nAfter transfer:" << endl;
    acc1.display();
    acc2.display();

    return 0;
}
