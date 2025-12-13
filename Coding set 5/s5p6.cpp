/*Flight Reservation System 
Concepts: Dynamic array of objects, object filtering 
Problem: 
Create a class Flight with data members: flightNo, source, destination, seatsAvailable. 
• Allocate flights dynamically (new Flight[n]). 
• Display all flights going to a particular destination entered by user. 
• Update seat count when a booking is made. 
Hint: 
Use functions for searching and seat modification. */
#include<iostream>
#include<string>
using namespace std;

class Flight {
public:
    int flightNo;
    string source;
    string destination;
    int seatsAvailable;
    void getData() {
        cout << "Enter Flight No: ";
        cin >> flightNo;
        cout << "Enter Source: "; cin>>source;
        cout << "Enter Destination: "; cin>>destination;
        cout << "Enter Seats Available: ";
        cin >> seatsAvailable;
    }

    void display() {
        cout<<"\nFlight No: "<<flightNo;
        cout<<"\nSource: " <<source;
        cout<<"\nDestination: "<<destination;
        cout<<"\nSeats Available: "<<seatsAvailable<<endl;
    }
};
int main() {
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;
    Flight*f=new Flight[n];
    for(int i=0;i<n;i++) {
        cout<<"\nEnter details of flight " <<i+1<<endl;
        f[i].getData();
    }
    string dest;
    cin.ignore();
    cout << "\nEnter destination to search flights: ";
    getline(cin, dest);
    cout << "\nFlights going to " << dest << ":\n";
    for (int i=0;i<n;i++) {
        if(f[i].destination==dest) {
            f[i].display();
        }
    }
    int no, seats;
    cout<<"\nEnter flight number to book seats: ";
    cin>>no;
    cout<<"Enter seats to book: ";
    cin>>seats;
    for (int i=0;i<n;i++) {
        if (f[i].flightNo==no) {
            f[i].seatsAvailable=f[i].seatsAvailable-seats;
            cout<<"Seats booked successfully!\n";
            f[i].display();
            break;
        }
    }
    delete[] f;
    return 0;
}
