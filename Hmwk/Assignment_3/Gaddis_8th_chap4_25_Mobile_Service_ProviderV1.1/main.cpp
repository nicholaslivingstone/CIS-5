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
    double MAX_ALLOWANCE, MONTHLY, EX_MINUTES, extra, bill;
    
    cout << "What package have you purchased?\nEnter a/b/c" << endl;
    cin >> pack;

    //determine what package was selected and the data for that package
    cout << setprecision(2) << fixed;
    switch (pack)
    {
        case 'a':
            MAX_ALLOWANCE = 450;
            MONTHLY = 39.99;
            EX_MINUTES = 0.45;
            break;
        case 'b':
            MAX_ALLOWANCE = 900;
            MONTHLY = 59.99;
            EX_MINUTES = 0.4;
            break;
    }
    
    //display and calculate data
    if (pack == 'a' || pack == 'b'){
        
        int min;
        cout << "How many minutes have you used this month?" << endl;
        cin >> min;
        

        static_cast<double>(min);           //convert the number of minutes from an integer
        
        cout << endl;
        cout << "You selected Package " << pack << endl;
        if (min > MAX_ALLOWANCE){           //determine if the customer has used up all their minutes
                extra = min - MAX_ALLOWANCE;
                bill = MONTHLY + extra * EX_MINUTES;
                cout << "You have used up all your minutes" << endl;
                cout << "Your bill for this month is $" << bill;
        }
        else if (min <= MAX_ALLOWANCE){
                cout << "You have not gone over your monthly minute allowance" << endl;
                cout << "Your bill for this month is $39.99";
        }
    }
    else if (pack == 'c'){
        cout << "You selected Package C" << endl;
        cout << "Your bill for this month is $69.99";
    }
    else{
        cout << "You did not select a valid package\n"
                "Please run the program again and choose a/b/c";
    }
    

    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}