/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Determine Magic Dates
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
    int day, month, year;
    
    cout << "Enter a date below\n";
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Two-digit year: ";
    cin >> year;
    
    
    if (day * month == year)    //determine if the date is magic
        cout <<  day << "/" << month << "/" << year << " Is a magic date!";
    else
        cout << day << "/" << month << "/" << year << " Is not a magic date.";
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}