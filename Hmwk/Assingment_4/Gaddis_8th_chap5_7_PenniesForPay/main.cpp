/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Calculate the estimated savings of a penny a day
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
    int days;
    float total = 0 , penny = .01;
    
    cout << "This will calculate the earnings of a salary of a penny+ 1 a day" << endl;
    cout << "How many days of savings should be estimated?" << endl;
    cin >> days;


    cout << "Day" << setw(17) << "Earnings" << setw(25) << "Total Savings" << endl;
    cout << "-----------------------------------------------" << endl;
    
    for (int day = 1; day <= days; penny += .01, day++){
        total += penny;
        cout << day << setw(17) << penny << setw(25) << total << endl;
    }
    

    
    


    //Exit stage right!
    return 0;
}