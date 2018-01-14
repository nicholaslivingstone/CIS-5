/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 8, 2018, 1:20 PM
 * Purpose:  Accounting of Stock Costs
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
    double  stock,         //amount of stocks
            price,          //cost of each stock
            rate,           //% commission of stock broker
            totalStock,     //cost of all stocks
            commission ,    //Commission to broker cost
            total ;          //cost of stock and commission
    stock = 750;
    price = 35;
    rate = .02; 
    
    //Math
    totalStock = stock * price;
    commission = totalStock * rate;
    total = totalStock + commission;
    cout << "Cost of all stocks: $" << totalStock << endl;
    cout << "Commission paid: $" << commission << endl;
    cout << "Total amount paid: $" << total << endl;
    
    
    
    //Exit stage right!
    return 0;
}