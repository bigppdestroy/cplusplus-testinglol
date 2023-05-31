#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // just testing
    const double pi = 3.14159265359;
    cout << "Enter circle radius to find area: ";
    int circle_radius;
    cin >> circle_radius;
    double circle_area = pi*pow(circle_radius,2);
    cout << circle_area;
    

    return 0;
}