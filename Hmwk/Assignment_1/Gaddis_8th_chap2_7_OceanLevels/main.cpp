/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018
 * Purpose:  Calculate the Rise of Ocean levels
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
    double rise, year5, year7, year10;
    //Initialize Variables
    rise = 1.5;
    //Process/Map inputs to outputs
    year5 = rise * 5;
    year7 = rise * 7;
    year10 = rise * 10;
    //Output data
    
    cout << "After 5 years: " << year5 << "mm" << endl;
    cout << "After 7 years: " << year7 << "mm" << endl;
    cout << "After 10 years: " << year10 << "mm" << endl;

    //Exit stage right!
    return 0;
}