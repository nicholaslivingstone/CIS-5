/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 12, 2018
 * Purpose:  Calculating Trig Values
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double angle,
            c,
            s,
            t;
    
    cout << "Enter an angle in radians: ";
    cin >> angle;
    
    c = cos(angle);
    s = sin(angle);
    t = tan(angle);
    
    cout << "Below are the trig values of the angle" << endl;
    cout << setprecision(4) << fixed;
    cout << "Cosine: " << c << endl;
    cout << "Sine: " << s << endl;
    cout << "Tangent: " << t;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}