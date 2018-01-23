/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Calculate average rainfall over a period of years
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
    int year, month;
    float rain, total;
    cout << "How many years of rainfall should be estimated? ";
    cin >> year;
    
    
    while (year <= 0){
        cout << "ERROR: Enter a valid number of years: ";
        cin >> year;
    }

    

    for (int i = 1; i <= year; i++){
        cout << "Year " << i << ":" << endl;
        for (int month = 1; month <= 12 ; month++){
            cout << "Month " << month << " Inches of Rainfall: ";
            cin >> rain;
            total += rain;
        }
    }
    
    cout << endl;
    cout << "Months: " << year * 12 << endl;
    cout << "Total Inches of Rainfall: " << total << endl;
    cout << "Average Rainfall Per Month: " << setprecision(2) << fixed << total / (year * 12) << " Inches";
    
    
    


    //Exit stage right!
    return 0;
}