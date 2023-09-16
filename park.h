//Parking
#include <iostream>
using namespace std;
class ParkingLot {
private:
    int capacity;
    int occupiedSpaces;

public:
    ParkingLot(int lotCapacity) {
        capacity = lotCapacity;
        occupiedSpaces = 0;
    }

    bool isFull() const { //is full function is constant because I don't want to modify the object 
        return occupiedSpaces >= capacity;
    }

    void parkVehicle() {
        if (occupiedSpaces < capacity) {
            occupiedSpaces++;
            cout << "Vehicle parked. Occupied spaces: " << occupiedSpaces <<endl;
        } else {
            cout << "Parking lot is full. Cannot park vehicle." <<endl;
        }
    }

    void removeVehicle() {
        if (occupiedSpaces > 0) {
            occupiedSpaces--;
            cout << "Vehicle removed. Occupied spaces: " << occupiedSpaces << endl;
        } else {
            cout << "No vehicles in the parking lot." <<endl;
        }
    }
 double calculateParkingFee() {
        double feePerHour = 5.0;
        int hoursParked;  // number of hours parked
        double totalFee = feePerHour * hoursParked;
        return totalFee;
    }

};

