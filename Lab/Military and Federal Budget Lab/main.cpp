/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 11, 2018, 10:00 AM
 * Purpose:  Calculate the Military Budget as it relates to the federal budget.
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
    
     float milBdgt = 639.1e09f, //Military  Budget = 639.1 Billion
             fedBdgt = 4.094e12f, // Federal Budget = 4.094 Trillion
             mlPrcnt; 
     
     mlPrcnt = milBdgt / fedBdgt;
     mlPrcnt *= 100;
     
     cout << setprecision(2);
     cout << "The governement is using " << mlPrcnt << "% of the federal budget for the military";
    //Declare Variables
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}