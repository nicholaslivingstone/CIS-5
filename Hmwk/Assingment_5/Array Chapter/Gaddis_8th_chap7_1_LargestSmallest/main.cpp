/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 4, 2018
 * Purpose:  Find min/max values of an array
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
    const int SET = 10;
    int NUMBER[SET];
    
    //input of data
    for (int i = 0; i < SET; i++){
        cout << "Enter number " << i + 1 << ":";
        cin >> NUMBER[i];
    }
 
    
    //Declare min & max
    int MAX = NUMBER[0],
            MIN = NUMBER[0];
    
    
    //find max
    for (int i = 1; i < SET; i++){
        if (NUMBER[i] > MAX)
            MAX = NUMBER[i];
    }
    
    //find min
    for (int i = 1; i < SET; i++){
        if (NUMBER[i] < MIN)
            MIN = NUMBER[i];
    }
    
    //Output
    cout << "Maximum of the set: " << MAX << endl;
    cout << "Minimum of the set: " << MIN;
    
    
    //Exit stage right!
    return 0;
}
