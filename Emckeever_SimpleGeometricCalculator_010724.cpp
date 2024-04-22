/*
** Assignment Title: Simple Geometric Calculator
** Author: Eric R. McKeever
** Affiliation: School of Technology, Rasmussen University
** Course Title: COP1350C: C++ Programming
** Instructor: Prof. Evelyn Zayas
** Date: Jan. 7, 2024
*/

#include <iomanip>
#include <iostream>

using namespace std;


int main()
{
    // variable declaration
    int side1, side2, area1;
    double side3, side4, area2; 

    // output 1 variable initialization. 
    side1 = 3;
    side2 = 4;
    area1 = 0;

    // calculate area using the following formula: 1/2 * base * height
    area1 = 0.5 * side1 * side2;

    // display output to user.
    cout << "The sides of the triangle measure " << side1 << " and " << side2;
    cout << ". The area is " << area1 <<".\n" << endl;
    
    // output 2 variable initialization.
    side3 = 0.0;
    side4 = 0.0;
    area2 = 0.0;

    // setting side3 to equal side1 value and side4 to equal side2 value then multiplying side3 and side4 by five. 
    side3 = side1 * 5;
    side4 = side2 * 5;

    // calculate area using the following formula: 1/2 * base * height
    area2 = 0.5 * side3 * side4;

    // display output to user.
    cout << fixed << setprecision(1) << "The sides of the triangle measure " << side3 << " and " << side4;
    cout << fixed << setprecision(1) << ". The area is " << area2 << ".\n" << endl;
    
    return 0;
}
