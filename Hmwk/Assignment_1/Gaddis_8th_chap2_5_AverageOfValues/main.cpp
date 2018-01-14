/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018
 * Purpose:  Calculate and Display the Average of Values 
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
    double var1, var2, var3, var4, var5, sum, avg;
    var1 = 28;
    var2 = 32;
    var3 = 37;
    var4 = 24;
    var5 = 33;
    //Initialize Variables
            
    //Process/Map inputs to outputs
    sum = var1 + var2 + var3 + var4 + var5;
    avg = sum / 5;
    //Output data
    cout << "Average: " << avg;
    //Exit stage right!
    return 0;
}