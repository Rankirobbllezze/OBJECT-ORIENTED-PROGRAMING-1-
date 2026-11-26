#include <iostream>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;
        cout << "Room booking confirmed!" << endl;
    }

    void displayBookingDetails() {
        cout << "\n===== BOOKING DETAILS =====" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << daysBooked << endl;
    }

    ~RoomBooking() {
        cout << "Booking ended, room released!" << endl;
    }
};

int main() {
    RoomBooking booking1("Alenga Josh", 136, 5);
    booking1.displayBookingDetails();

    return 0;
}