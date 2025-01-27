/*Program File Name: Chapter2Exercise20
Programmer: Patrick Liao
Date: 1.26.2025
Requirements: Calculates the approximate number of gallons needed to paint two coats on a wooden fence 6' high and 100' long, at a rate of 340ft^2/gal */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double areapergal= 340;
    double height = 6;
    double length = 100;
    double paintvol = (4 * height * length) / areapergal;                                                                                                //define variables and calculate necessary paint for two coats on both sides

        cout << "For a fence " << height << " feet tall and " << length << " feet long, you will need " << ceil(paintvol) << " gallons of paint.";       //display message
    return 0;

}
