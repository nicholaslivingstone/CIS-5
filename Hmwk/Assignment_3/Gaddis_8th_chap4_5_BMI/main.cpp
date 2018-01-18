/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Clalculate BMI (Body Mass Index)
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double weight, height, bmi;
    
    //aquire data from user
    cout << "BMI Calculator" << endl;
    cout << "Weight: ";
    cin >> weight;
    cout << "Height in Inches: ";
    cin >> height;
    
    //calculate BMI
    bmi = weight * 703 / pow(height, 2.0);
    
    
    //Display and Determine Health 
    cout << setprecision(2) << fixed;
    if (bmi > 25)
        cout << "BMI: " << bmi << endl << "Overweight";
    else if (bmi < 18.5)
        cout << "BMI: " << bmi << endl << "Underweight";
    else
        cout << "BMI: " << bmi << endl << "Optimal Weight";

    //Exit stage right!
    return 0;
}