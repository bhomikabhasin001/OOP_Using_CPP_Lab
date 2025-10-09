// Returning object from function
/* Create a class Time with data members hours and minutes.
Write a function addTime(Time t) that adds two time objects with 
object c and return the result.
Ensure minutes are properly converted into hours if they exceed 60.*/

#include<iostream>
using namespace std;
class Time{
    int hours;
    int minutes;
    public:
    Time(){
        hours=0;
        minutes=0;
    }
    Time(int h, int m){
        hours=h;
        minutes=m;
    }
    void display(){
        cout<<"Hours:"<<hours<<","<<"Minutes:"<<minutes<<endl;
    }
        Time addTime(Time t){
        Time temp; 
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;
        if (temp.minutes >= 60){
            temp.hours += temp.minutes / 60;
            temp.minutes %= 60;
        }
            return temp;
   }
};
int main(){
    Time t1(1, 45); 
    Time t2(2, 30); 
    Time t3;       
    cout << "Time 1:" <<endl;
    t1.display();
    cout << "Time 2:" << endl;
    t2.display();
    t3 = t1.addTime(t2); 
    cout << "Sum of Time:" << endl;
    t3.display();
    return 0;
}
