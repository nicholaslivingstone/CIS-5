/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 18, 2018
 * Purpose:  Calculate paycheck using switch statement
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
    cout << "Pay/Hour:    $";
    cin >> payRate;
    cout << "Hours worked: ";
    cin >> hrsWrkd;

    switch (hrsWrkd/10){
        case 0: cout << "You earned $" << (hrsWrkd * payRate); break; 
        case 1: cout << "You earned $" << (hrsWrkd * payRate); break; 
        case 2: cout << "You earned $" << (hrsWrkd * payRate); break; 
        case 3: cout << "You earned $" << (hrsWrkd * payRate); break; 
        case 4: hrsWrkd == 40 ? cout << "You earned $" << (hrsWrkd * payRate):
            cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break;
        case 5: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break;
        case 6: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 7: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 8: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 9: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 10: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 11: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 12: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        case 13: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate)); break; 
        default: cout << "please enter a valid number of hours";
    }
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}