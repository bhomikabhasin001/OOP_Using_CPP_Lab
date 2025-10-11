// Call by Reference(Member function)
/*Create a class Time(hours,minutes). Add a member function addTime(Time&t)
that adds t to the calling object(passed by reference)*/

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
    void addTime(Time &t){
        minutes+=t.minutes;
        hours+=t.hours+(minutes/60);
        minutes%=60;
    }
    void display(){
        cout<<"Time:\n"<<"hours:"<<hours<<"minutes:"<<minutes<<endl;
    }
};
int main(){
    Time t1(3,45);
    Time t2(4,30);
    t1.display();
    t2.display();
    t1.addTime(t2);
    cout<<"after addition"<<endl;
    t1.display();
}



