#include <iostream>
using namespace std;

int main() {
    int seats = 10;
    int choice, tickets;

    do {
        cout << "\n1. Book Ticket\n2. Available Seats\n3. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "How many tickets? ";
                cin >> tickets;

                if(tickets <= seats) {
                    seats -= tickets;
                    cout << "Booking Successful\n";
                } else {
                    cout << "Not enough seats available\n";
                }
                break;

            case 2:
                cout << "Available Seats = " << seats << endl;
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }
    } while(choice != 3);

    return 0;
}