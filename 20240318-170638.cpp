#include <iostream>
using namespace std ;
class DistanceConverter {
private:
    double centimeters;

public:
    
    DistanceConverter(double cm) : centimeters(cm) {}

    
    double toInches() const {
        return centimeters / 2.54;
    }

    double toFeet() const {
        return centimeters / 30.48;
    }

    double toMeters() const {
        return centimeters / 100;
    }

    double toKilometers() const {
        return centimeters / 100000;
    }
};

int main() {
    double centimeters;
    cout << "Enter distance in centimeters: ";
    cin >> centimeters;

    DistanceConverter converter(centimeters);
 cout << "Inches: " << converter.toInches() << endl;
 cout << "Feet: " << converter.toFeet() << endl;
 cout << "Meters: " << converter.toMeters() <<endl;
 cout << "Kilometers: " << converter.toKilometers()<<endl;
    return 0;
    }