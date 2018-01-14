/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018, 1:20 PM
 * Purpose:  Calculate gas price, tax, and profits
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
    double fTax = .184,     //Federal Tax
            sTax = .417,    //State Tax
            ssTaxP = .0225, //State Sales Tax Percent 
            ssTax,          //State tax dollar amount
            dprof,          //Dollar amount of profit
            pprof,          //Percent of Profit
            totTax,         //Total Tax on a gallon of gas
            gprice,         //What the user pays for tax
            bprice,         //Base price of a gallon of gas
            pprice,         //Percentage price
            dprof0 = .07,          //initial dollar profit
            prof0,                  //inital percent profit
            prof1 = .065;           //final percent profit
            
    
    cout << "How much do you pay for a gallon of gas?\n";
    cin >> gprice;
    
    ssTax = ssTaxP * gprice;    //calculate the dollar value of state tax 
    totTax = fTax + sTax + ssTax;   //calculate total tax 
    bprice = gprice - totTax;   //base price without tax 
    pprice = gprice / bprice; //Percentage price calculated with base and full price
    prof0 = dprof0 / bprice;     //initial profit margin
    
    //conversions
    prof0 = prof0 * 100;
    prof1 = prof1 * 100;
    pprice = pprice *100;
    
    //output
    cout << "The total tax on a gallon of gas is: $" << setprecision(2) << totTax << endl;
    cout << "The base price of a gallon of gas is: $" << setprecision(3) << bprice << endl;
    cout << "The percentage price due to gas tax is: " << setprecision(3) << pprice << "%\n";
    cout << "The oil company profits ";
    cout << setprecision(1) << prof0 << "-" << prof1 << "%";
    
     
            
            
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}