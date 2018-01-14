/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 12, 2018 
 * Purpose:  Calculate how many widgets are on a pallet
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
    float totweight,
            pallet,
            widgetweight,
            widgets;
    
    cout << "What is the weight of the widgets and pallet?\n";
    cin >> totweight;
    cout << "what is the weight of the pallet?\n";
    cin >> pallet;
    
    widgetweight = totweight - pallet;
    widgets = widgetweight / 12.5;
    
    cout << setprecision(0) << fixed;
    cout << "There are approximately " << widgets << " widgets on the pallet";
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}