/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  This program will calculate the sum of a number
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "Input a positive integer to calculate the sum of all numbers: ";
    cin >> num;
    
    while (num < 0){        //verifies the number is positive
        cout << "ERROR: Please enter a positive integer: ";
        cin >> num;
    }
    
    cout << ((pow(num, 2) + num)/2); // calculation and output of sum

    //Exit stage right!
    return 0;
}