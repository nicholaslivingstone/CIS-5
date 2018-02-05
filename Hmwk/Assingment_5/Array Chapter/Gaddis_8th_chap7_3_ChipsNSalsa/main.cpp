/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 2, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 5;
    string SALSA[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty" };
    int JARS[5];
    
    cout << "CALCULATE SALSA SALES" << endl;
    cout << "---------------------" << endl;
    
    for (int i = 0; i < SIZE; i++){
        cout << "Number of " << SALSA[i] << " Jars Sold:";
        cin >> JARS[i];
        while (JARS[i] < 0){
            cout << "ERROR INVALID NUMBER OF JARS ENTERED: ";
            cin >> JARS[i];
        }
    }
    
    //initialize max and min 
    int MAX = JARS[0],
            MIN = JARS[0];
    
    
    string max, min;
    for (int i = 1; i < SIZE; i++){
        if (JARS[i] > MAX)
            max = SALSA[i];
    }
    
    for (int i = 1; i < SIZE; i++){
        if (JARS[i] < MIN)
            min = SALSA[i];
    }
    
    
    
    cout << "---------------------" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << SALSA[i] << " Jars Sold: " << JARS[i] << endl;
    }
    
    cout << "Most sold were " << max << endl;
    cout << "Least sold were " << min;

    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}