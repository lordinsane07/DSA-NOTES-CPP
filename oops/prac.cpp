#include <iostream>
using namespace std;

// Define the Box class
class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize dimensions
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate the volume
    double calculateVolume() {
        return length * width * height;
    }

    // Function to display the volume
    void displayVolume() {
        cout << "Volume of the box: " << calculateVolume() << endl;
    }
};

int main() {
    // Create a Box object with length, width, and height
    Box box(5.0, 3.0, 4.0);
    
    // Display the volume
    box.displayVolume();

    return 0;
}
