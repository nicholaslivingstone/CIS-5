/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    
    double customers,   //total number of customers surveyed
            weeklyVar,  //percent that buy one or more energy drink per week
            citrusVar,  //percent that prefer citrus flavor
            weekly,     //number that buy one more drinks per week
            citrus;     //number that prefer citrus flavor
    
    customers = 16500;
    weeklyVar = .15;
    citrusVar = .58;
    
    //Math
    weekly = customers * weeklyVar;
    citrus = weekly * citrusVar;
    
    cout << "The amount of customers that buy 1 or more energy drinks per week is " 
            << weekly << endl;
    cout << "The amount of those customers that prefer the citrus flavor is "
            << citrus;
    
    
    //Exit stage right!
    return 0;
}