/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 18, 2018
 * Purpose:  Calculate paycheck with switch statement;
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
    short hrsWrkd;
    float payRate, payChck;
    
    cout << "This program will calculate your total paycheck" <<endl;
    cout << "Pay/Hour:    $";
    cin >> payRate;
    cout << "Hours worked: ";
    cin >> hrsWrkd;

    switch (hrsWrkd < 0){
        case true: cout << "Please enter a valid number of hours" ;break;
        default:{
            switch(hrsWrkd > 40){
                case true: cout << "You earned $" << (40 * payRate + ( hrsWrkd - 40 ) * (2 * payRate));break;
                default: cout << "You earned $" << (hrsWrkd * payRate);
                                    
                                
                            }
                        }
                    }
                
        
      
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}