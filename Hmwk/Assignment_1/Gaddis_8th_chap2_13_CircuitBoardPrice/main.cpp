/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018, 1:20 PM
 * Purpose:  Calculate the selling price of a circuit board
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
    double prof,    //% profit
           pamount,  //$ value of profit 
           price,    //cost of circuit board
           sprice;   //selling price
    
    //Initialize Variables
    prof = .35;
    price = 14.95;
    //Process/Map inputs to outputs
    pamount = prof * price;
    sprice = pamount + price; 
    //Output data
    cout << "The selling price of the circuit boards will be: $";
    cout << sprice;
    //Exit stage right!
    return 0;
}