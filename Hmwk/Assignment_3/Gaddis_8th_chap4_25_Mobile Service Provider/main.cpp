/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Calculate the a mobile phone customer's monthly bill
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
    char pack;
    int min;
    double packA, packB, packC, extra, bill;
    
    cout << "What package have you purchased?\nEnter a/b/c" << endl;
    cin >> pack;
    cout << "How many minutes have you used this month?" << endl;
    cin >> min;
    
    //convert the number of minutes from an integer
    static_cast<double>(min);
    
   
    //determine what package was selected
    
    cout << setprecision(2) << fixed;
    switch (pack)
    {
        case 'a':
            cout << "Package A";
            if (min > 450){  //if the customer has used up all their minutes
                extra = min - 450;
                bill = 39.99 + extra * 0.45;
                cout << ">You have used up all your minutes" << endl;
                cout << ">Your bill for this month is $" << bill;
        }
            else if (min <= 450){
                cout << "You have not gone over your monthly minute allowance" << endl;
                cout << "Your bill for this month is $39.99";
        }
            else
                cout << "Enter a valid number of minutes";
             break;
        case 'b':
                cout << "Package B";
                    if (min > 900){  //if the customer has used up all their minutes
                extra = min - 900;
                bill = 59.99 + extra * 0.4;
                cout << ">You have used up all your minutes" << endl;
                cout << ">Your bill for this month is $" << bill;
        }
            else if (min <= 900){
                cout << ">You have not gone over your monthly minute allowance" << endl;
                cout << ">Your bill for this month is $59.99";
        }
            else
                cout << "Enter a valid number of minutes";
            break;
        case 'c':
            cout << "Package C";
                    if (min > 0)
            cout << "Your bill for this month is $69.99";
            else
                cout << "Enter a valid number of minutes";
            break;
        default: cout << "You did not select a valid package: A, B, or C";
    }
    
    

    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}