/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 3, 2018
 * Purpose:  Convert from Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
double celsius(double);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    cout << "°F"  << "   " << "°C" << endl;
    cout <<"--------------" << endl;
    
    for (int i = 0; i <= 20; i++){
        double c = celsius(i);
        if (i >= 0 & i < 10)
            cout << i << "    " << c << endl;
        else
            cout << i <<  "   " << c << endl;
    }
    //Exit stage right!
    return 0;
}

double celsius(double F){
    return (5.0/9.0) * (F-32.0);
}