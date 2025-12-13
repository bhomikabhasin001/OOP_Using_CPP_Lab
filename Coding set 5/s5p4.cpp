/*Cricket Player Statistics 
Concepts: Array of objects, sorting based on member variable 
Problem: 
Design a class Cricketer with members: playerName, matches, runs, average. 
• Read data for n players. 
• Calculate average = runs / matches. 
• Sort and display players in descending order of average runs. 
Hint: 
Use a sorting algorithm (like bubble sort) with object swapping.*/
#include<iostream>
#include<string>
using namespace std;
class Cricketer{
    public:
    string playerName;
    int matches;
    int runs;
    float average;
    Cricketer(){
        playerName="unknown";
        matches=0;
        runs=0;
        average=0;
    }
    Cricketer(string p, int m, int r, float a){
        playerName=p; matches=m; runs=r; average=a;
    }
    void setData(){
        cout<<"--Enter details of the cricketer--";
        cout<<"\nEnter name of player:"<<endl;
        cin>>playerName;
        cout<<"Enter number of matches played:"<<endl;
        cin>>matches;
        cout<<"Enter runs of player:"<<endl;
        cin>>runs;
        calculateAverage();
    }
    float calculateAverage(){
        if(matches>0){
            average= static_cast<float> (runs)/matches;
            return average;
        } else {
            return average=0.00;
        }
    }
    void display(){
        cout<<"\n\n-----Details of cricketers are-----"<<endl;
        cout<<"Name:"<<playerName;
        cout<<"\nTotal matches played:"<<matches;
        cout<<"\nRuns scored:"<<runs;
        cout<<"\nAverage:"<<average;
    }
};
void sortCricketers(Cricketer players[], int n) {
    for (int i=0;i<n-1;++i) {
        for (int j=0;j<n-i-1;++j) {
            if (players[j].average<players[j+1].average) {
                Cricketer temp=players[j];
                players[j]=players[j+1];
                players[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    const int MAX_PLAYERS=20;
    Cricketer players[MAX_PLAYERS];
    cout << "Enter the number of players (Max " << MAX_PLAYERS << "): ";
    cin >> n;
    if (n<=0||n>MAX_PLAYERS) {
        cout<<"wrong number entered"<< endl;
        return 1;
    }
    for (int i=0;i<n;++i) {
        players[i].setData();
    }
    for(int i=0;i<n;i++){
        players[i].display();
    }
    sortCricketers(players, n);
    cout<<"\n---Players Sorted by Average Runs in Descending order ---"<<endl;
    for (int i=0;i<n;++i) {
        players[i].display();
    }
    return 0;
}
