/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 3, 2018
 * Purpose:  Determine which company had the greatest sales of a quarter
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
double getSales(string);      //Validate and return sales figure
void findHighest(double, double, double, double);     //determines largest of four divisions
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double D1, D2, D3, D4; //Sales for each division
    
    D1 = getSales("Northeast");
    D2 = getSales("Southeast");
    D3 = getSales("Northwest");
    D4 = getSales("Southwest");

    findHighest(D1, D2, D3, D4);    //Calculate the Highest
    
    //Exit stage right!
    return 0;
}

double getSales(string DIVIS){
    double SALES; //Sales Figure
    
    cout << "Enter the sales figure for the " << DIVIS << " Division: $";
    cin >> SALES;
    
    while (SALES < 0){
        cout << "ERROR: ENTER A VALID SALES FIGURE GREATER THAN OR EQUAL TO $0" << endl;
        cout << "$";
        cin >> SALES;
    }
    
    return SALES;
}

void findHighest(double S1, double S2, double S3, double S4){
    if (S1 > S2 & S1 > S3 & S1 > S4)
        cout << "The Northeast has the greatest sales figure with $" << S1;
    else if (S2 > S1 & S2 > S3 & S2 > S4)
        cout << "The Northeast has the greatest sales figure with $" << S2;
    else if (S3 > S1 & S3 > S4 & S3 > S4)
        cout << "The Northeast has the greatest sales figure with $" << S3;
    else if (S4 > S1 & S4 > S2 & S4 > S3)
        cout << "The Northeast has the greatest sales figure with $" << S4;
}