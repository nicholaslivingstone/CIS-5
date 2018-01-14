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
    float boys,
            girls, 
            clas,
            boyper, //percentage of boys
            girlper; //percentage of girls
    
    cout << "How many boys are in the class? ";
    cin >> boys;
    cout << "How many girls are in the class? ";
    cin >> girls;
    
    clas = boys + girls; 
    
    boyper = 100 * (boys / clas);
    girlper = 100 * (girls / clas);
    
    cout << setprecision(0) << fixed;
    cout << "The class is " << boyper << "% boys and " << girlper << "% girls.";
    
    
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}