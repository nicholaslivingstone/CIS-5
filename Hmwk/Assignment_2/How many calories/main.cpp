/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 12, 2018
 * Purpose:  Calculate the amount of calories based on the amount of cookies eaten
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
    float calories,
            cookies;
    
    //1 cookies = 100 calories
    
    cout << "How many cookies did you eat? ";
    cin >> cookies;
    
    calories = cookies * 100;
    
    cout << "You consumed " << calories << " calories. ";
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}