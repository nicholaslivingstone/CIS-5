/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Calculate time based on seconds
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
    double sec;
    
    cout << "Input a number of seconds: ";
    cin >> sec;
    
    cout << setprecision(2) << fixed;
    if (sec >= 86400)
        cout << "That is " << sec/86400 << " Days";
    else if (sec >= 3600)
        cout << "That is " << sec/3600 << " Hours";
    else if (sec >= 60)
        cout << "That is " << sec/60 << " Minutes";
    else 
        cout << "Please enter a valid number of seconds";
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}