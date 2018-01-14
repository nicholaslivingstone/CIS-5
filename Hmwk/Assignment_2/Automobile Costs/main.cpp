/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 12, 2018
 * Purpose:  Calculate total cost of maintaining a car
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
    float loan,
            insurance,
            gas,
            oil, 
            tires,
            maint,
            monthly,
            annual;
    cout << "Enter the following monthly costs to calculate car expenses\n";
    cout << "Loan payment: $";
    cin >> loan;
    cout << "Insurance: $";
    cin >> insurance;
    cout << "Gas: $";
    cin >> gas;
    cout << "Oil: $";
    cin >> oil;
    cout << "Tires: $";
    cin >> tires;
    cout << "Maintenence: $";
    cin >> maint;
    
    monthly = loan + insurance + gas + oil + tires + maint;
    annual = monthly * 12;
    
    cout << "\nTotal Monthly expenses: $" << monthly << endl;
    cout << "Annual Expenses: $" << annual;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}