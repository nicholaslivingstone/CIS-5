/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Calculate country club membership fee
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
    float rate = 1;
    

    cout << "Cost of the Country Club" << endl;
    cout << "Year" << setw (17) << "Membership Fee" << endl;
    cout << "-------------------------" << endl;
    
    for (year = 1; year <= 6; year++, rate += .04)
        cout << year << setw(15) << rate * 2500  << endl; 
    
    
    


    //Exit stage right!
    return 0;
}