/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Compare the value of two numbers
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
    float n1, n2;
    
    cout << "Enter two different numbers\n\n";
    cout << "First number:";
    cin >> n1;
    cout << "Second Number:";
    cin >> n2;
    
    if (n1 == n2)
        cout << "Those numbers are the same!";
    else
        {
        if (n1 > n2)
            cout << n1 << " is larger than " << n2;
        else
            cout << n2 << " is larger than " << n1;
        }
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}