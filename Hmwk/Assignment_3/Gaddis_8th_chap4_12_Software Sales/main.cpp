/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Calculate the discount on software sales 
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
    int units;
    
    cout << "How many units are you going to purchase?" << endl;
    cin >> units;
    
    //convert the number of units from an integer
    static_cast<double>(units);
    
    cout << setprecision(2) << fixed;
    if (units >= 100)
        cout << "You will get a discount of 50% and it will cost $" << units * 99 * 0.5;
    else if (units >= 50)
        cout << "You will get a discount of 40% and it will cost $" << units * 99 * 0.6;
    else if (units >= 20)
        cout << "You will get a discount of 30% and it will cost $" << units * 99 * 0.7;
    else if (units >=10)
        cout << "You will get a discount of 20% and it will cost $" << units * 99 * 0.8;
    else if (units > 0)
        cout << "You are not eligible for a discount";
    else
        cout << "Please enter a valid number of units";
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}