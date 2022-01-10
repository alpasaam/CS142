#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double CalcRectanglePerimeter(double height, double width);

void PrintRectanglePerimeter(double height, double width);

void DoubleRectanglePerimeter(double &height, double &width);

double CalcCircumferenceOfCircle(double radius);

double CalcAreaOfCircle(double radius);

double CalcVolumeOfSphere(double sphereRadius);

void Swap(int &intX, int &intY);

void Swap(double &doubleX, double &doubleY);


const double PI = 3.14;


//main function
int main() {
    cout << "Getting this line to print earns you points!\n";

    double height = 0;
    double width = 0;
    double radius = 0;

    cin >> height >> width >> radius;

    PrintRectanglePerimeter(height, width);
    cout << CalcRectanglePerimeter(height, width) << std::endl;
    cout << "... about to double height and width...\n";
    DoubleRectanglePerimeter(height, width);
    PrintRectanglePerimeter(height, width);


    return 0;
}

//CalcRectanglePerimeter takes parameters height and width as doubles and calculates and
//returns the perimeter of the rectangle.
double CalcRectanglePerimeter(double height, double width) {
    double perimeter = (height * 2) + (width * 2);
    return perimeter;
}

//PrintRectanglePerimeter takes parameters height and width as doubles and calls CalcRectanglePerimeter.
//PrintRectanglePerimeter then outputs the results.
//The numbers should be printed with exactly one digit after the decimal point.
void PrintRectanglePerimeter(double height, double width) {
    cout << fixed << setprecision(1);
    cout << "A rectangle with height " << height << " and width " << width << " has a perimeter of "
         << CalcRectanglePerimeter(height, width) << "." << endl;
}

void DoubleRectanglePerimeter(double &height, double &width) {
    height = height * 2;
    width = width * 2;
}

// This function accepts a single double argument - the value of the radius of a circle. The function computes
// and returns the circumference (as a double value) of a circle with such a radius.
double CalcCircumferenceOfCircle(double radius) {
    double circumference = 2 * PI * radius;
    return circumference;
}


// This function accepts a single double argument - the value of the radius of a circle. The function computes
// and returns the area (as a double value) of a circle with such a radius.
double CalcAreaOfCircle(double radius) {
    double area = PI * radius * radius;
    return area;
}


// This function accepts a single double argument - the value of the radius of a sphere.
// The function computes and returns the volume (as a double value) of a sphere with such a radius.
double CalcVolumeOfSphere(double sphereRadius) {
    double volume = (4.0 / 3.0) * PI * (sphereRadius * sphereRadius * sphereRadius);
    return volume;
}


// This function is to "swap" or exchange the values of the two int arguments.
void Swap(int &intX, int &intY) {
    int otherX = intX;
    int otherY = intY;
    intX = otherY;
    intY = otherX;
}


// This function is to "swap" or exchange the values of the two double arguments.
void Swap(double &doubleX, double &doubleY) {
    double otherX = doubleX;
    double otherY = doubleY;
    doubleX = otherY;
    doubleY = otherY;
}