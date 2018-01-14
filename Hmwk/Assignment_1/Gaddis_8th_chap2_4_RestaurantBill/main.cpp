/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 7, 2018 
 * Purpose:  Computes tax and tip of a bill of $88.67
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
    double meal_charge, //amount without tax
           taxRate,     //tax rate
           tax_amount,  //value of tax from meal cost
           tipRate,
           tip,         //total of tip
           bill,        //cost without tip
           totalBill;   //cost with tip
    //Initialize Variables
    meal_charge = 88.67;
    taxRate = .0675;
    tipRate = .2;
    //Process/Map inputs to outputs
    tax_amount = meal_charge * taxRate; //compute tax
    bill = tax_amount + meal_charge; //compute bill with tax
    tip = bill * tipRate;   //calculate tip
    totalBill = bill + tip; //total cost
    
    //Output data
    cout << "Meal Cost: $" << meal_charge;
    cout << "\nTax Amount: $" << tax_amount;
    cout << "\nTip Amount: $" << tip;
    cout << "\nTotal Bill: $" << totalBill;
    
    //Exit stage right!
    return 0;
}