/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018
 * Purpose:  Determine the amount of bytes in different data types
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

    //Output data
    cout << "A char is " << sizeof(char); 
    cout << " bytes long\n";
    cout << "An integer is " << sizeof(int); 
    cout << " bytes long\n";
    cout << "A single precision data type is " << sizeof(float); 
    cout << " bytes long\n";
    cout << "A double precision data type is " << sizeof(double); 
    cout << " bytes long";

    //Exit stage right!
    return 0;
}