/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 11, 2018, 5:25 PM
 * Purpose:  Calculate a cars gas mileage
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float gallons,
            miles,
            mpg;
    cout << "How many gallons of gas can your car hold? ";
    cin >> gallons;
    
    cout << "How many miles can your car drive on a full tank of gas? ";
    cin >> miles; 
    
    mpg = miles / gallons;
    
    cout << "Your car gets " << mpg << " MPG";
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}