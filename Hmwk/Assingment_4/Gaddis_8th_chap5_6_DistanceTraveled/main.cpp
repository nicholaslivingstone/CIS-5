/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Calculate distance of a car driven after x amount of miles
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
    float distance, speed, time;
    
    cout << "What is the speed of the vehicle in MPH?  ";
    cin >> speed;
    cout << "How many hours has it traveled?  ";
    cin >> time;
    


    cout << "Hour" << setw (18) << "Distance(miles)" << endl;
    cout << "-------------------------" << endl;
    
    for (int hour = 1; hour <= time; hour++){
        distance += speed;
        cout << hour << setw(15) << distance << endl;
    }
    
    
    


    //Exit stage right!
    return 0;
}