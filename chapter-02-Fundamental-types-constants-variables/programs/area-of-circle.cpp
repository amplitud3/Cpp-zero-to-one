// circumference and area of a circle with radius 2.5

#include<iostream>
using namespace std;

const double pi = 3.141593;

int main()
{
    double area, circuit , radius = 2.5;

    area = pi * radius * radius;

    circuit = 2 * pi * radius;

    cout << "\nTo Evaluvate a circle\n" << endl;

    cout << "Radius :     " << radius << endl
         << "Circmference: " << circuit << endl
         << "Area :        " << area << endl;

    return 0;
}
