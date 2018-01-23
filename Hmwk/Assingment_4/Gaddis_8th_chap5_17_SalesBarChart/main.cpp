/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Bar Graph Comparing the sales of 5 different stores
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
 
    int sales1,
            sales2,
            sales3,
            sales4,
            sales5;
    
    //gather data from user
    cout << "Enter today's sales below:" << endl;
    cout << "Store 1: $";
    cin >> sales1;
    cout << "Store 2: $";
    cin >> sales2;
    cout << "Store 3: $";
    cin >> sales3;
    cout << "Store 4: $";
    cin >> sales4;
    cout << "Store 5: $";
    cin >> sales5;
    
    //begin output
    
    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    cout << "Store 1: ";
    for (int i = 0; i < sales1 / 100; ++i)
        cout << '*';
    cout << endl << "Store 2: ";
    for (int i = 0; i < sales2 / 100; ++i)
        cout << '*';
    cout << endl << "Store 3: ";
    for (int i = 0; i < sales3 / 100; ++i)
        cout << '*';
    cout << endl << "Store 4: ";
    for (int i = 0; i < sales4 / 100; ++i)
        cout << '*';
    cout << endl << "Store 5: ";
    for (int i = 0; i < sales5 / 100; ++i)
        cout << '*';
    
    
    //Exit stage right!
    return 0;
}