/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 018
 * Purpose:  Convert to Roman Numerals
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
    int num;
    
    cout << "Enter a number 1-10 to convert to Roman numerals: ";
    cin >> num;
    cout << endl;
    switch (num)
    {
        case 1: cout << "I";
            break;
        case 2: cout << "II";
            break;
        case 3: cout << "III";
            break;
        case 4: cout << "IV";
            break;
        case 5: cout << "V";
            break;
        case 6: cout << "VI";        
            break;
        case 7: cout << "VII";        
            break;
        case 8: cout << "VIII";        
            break;
        case 9: cout << "IX";
            break;
        case 10: cout << "X";
            break; 
        default: cout << "You did not enter a valid number.";
    }
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}