/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 18, 2018
 * Purpose:  Calculate paycheck using dependent if statements
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
    short hrsWrkd;
    float payRate, payChck;
    
    cout << "This program will calculate your total paycheck" <<endl;
    cout << "Hours worked: ";
    cin >> hrsWrkd;

    
    cout << setprecision(2) << fixed;
    if (hrsWrkd <= 0)
        cout << "Please enter a valid number of hours worked.";
    else if (hrsWrkd > 40){
        cout << "$/Hour: ";
        cin >> payRate;
        cout << endl;
        payChck = 40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate);
        cout << "You worked " << hrsWrkd << " hours and earned $" << payChck;
    }
    else{
        cout << "$/Hour: ";
        cin >> payRate;
        cout << endl;
        payChck = hrsWrkd * payRate;
        cout << "You worked " << hrsWrkd << " hours and earned $" << payChck;
    }
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}