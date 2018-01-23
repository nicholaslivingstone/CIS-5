/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Calculate the rise of ocean levels over 25 years
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
    int year;
    

    cout << "The Rise of Sea Levels over 25 Years" << endl;
    cout << "Year" << setw (15) << "Rise (mm)" << endl;
    cout << "-------------------------" << endl;
    
    for (year = 1; year <= 25; year++){
        cout << year << setw(15) << 1.5 * year << endl; 
    }
    
    


    //Exit stage right!
    return 0;
}