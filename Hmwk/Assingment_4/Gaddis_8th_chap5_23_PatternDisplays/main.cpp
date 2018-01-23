/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Display a Pattern
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
 
    cout << "Pattern A" << endl;
    
    for (int row = 1; row <= 10; row++){
        for (int plus = 1; plus <= row; plus++){
            cout << '+';
        }
        cout << endl;
    }

    cout << "Pattern B" << endl;
    for (int row = 10; row >= 1; row--){
        for (int plus = 1; plus <= row; plus++){
            cout << '+';
        }
        cout << endl;
    }

    //Exit stage right!
    return 0;
}