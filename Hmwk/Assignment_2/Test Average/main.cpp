/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    float t1, t2, t3, t4, t5, avg; 
    
    cout << "Enter 5 different test scores\n";
    cout << "Score 1: ";
    cin >> t1; 
    cout << "Score 2: ";
    cin >> t2;
    cout << "Score 3: ";
    cin >> t3; 
    cout << "Score 4: ";
    cin >> t4;
    cout << "Score 5: ";
    cin >> t5; 
   
    avg = (t1 + t2 + t3 + t4 + t5) / 5; //Calculation
    
    cout << "Your average test score is " << avg;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}