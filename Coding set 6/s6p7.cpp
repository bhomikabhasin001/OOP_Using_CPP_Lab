//  Multiple Inheritance
/*Create class Teacher with member subject and class Researcher with member area_of_interest.
Derive a class TeachingAssistant from both and display details of TA.*/


#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    string subject;
    Teacher(string s){
        subject=s;
    }
};
class Researcher{
    public:
    string area_of_interest;
    Researcher(string a){
        area_of_interest=a;
    }
};
class TeachingAssistant : public Teacher, public Researcher {
public:
    TeachingAssistant(string s, string a): Teacher(s), Researcher(a) {}   
    void display() {
        cout << "Subject:"<<subject<<"\nArea of Interest:"<<area_of_interest<<endl;         
    }
};
int main(){
    TeachingAssistant ta("ABC","DEF");
    ta.display();
}
