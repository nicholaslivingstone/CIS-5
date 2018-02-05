/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 2, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    int ACCNT;
    const int SET = 18;
    int accounts[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255,1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
    
    bool valid;
    
    cout << "Account Number: ";
    cin >> ACCNT;
    
    for (int i = 0; i < SET; i++){
        if (ACCNT == accounts[i]){
            cout << "The account is valid";
            valid = true;
        }
    }
    
    if (valid != true)
        cout << "The account is not valid";
    
    //Exit stage right!
    return 0;
}