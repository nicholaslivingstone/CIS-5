/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018
 * Purpose: Calculate MPG
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double car, distance, mpg;
    //Initialize Variables
    car = 15;
    distance = 325; 
    //Process/Map inputs to outputs
    mpg = distance / car;
    //Output data
    cout << "The car gets " << mpg << " MPG";
    //Exit stage right!
    return 0;
}