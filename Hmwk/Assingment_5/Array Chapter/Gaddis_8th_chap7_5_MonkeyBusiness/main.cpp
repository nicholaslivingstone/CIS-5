/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 4, 2018;
 * Purpose:  Display Data of Monkey Food Consumption
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable
    const int MONKEY = 3;
    const int DAY = 5;
    string DAYS[DAY] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday" }; 
    float FOOD[MONKEY][DAY],
            AVG,
            TOTAL[DAY],
            MONKEYTOT[MONKEY];
    
    //Initialize Variables
    
    for (int i = 0; i < MONKEY; i++){
        for (int j = 0; j < DAY; j++){
            cout << "Pounds of food eaten by monkey " << i + 1 << " on " << DAYS[j] << ": ";
            cin >> FOOD[i][j];
            TOTAL[j] += FOOD[i][j];
            MONKEYTOT[i] += FOOD[i][j];
        }
    }
    
    for (int j = 0; j < DAY; j++){
        cout << "Average amount of food eaten per monkey on " << DAYS[j] << ":" << TOTAL[j]/3 << " lbs." << endl;
    }
    
    float MIN = MONKEYTOT[0], MAX = MONKEYTOT[0];
    int min, max;
    
    for (int i = 1; i < MONKEY; i++){
        if (MONKEYTOT[i] > MAX)
            max = i + 1;
    }
    
    for (int i = 1; i < MONKEY; i++){
        if (MONKEYTOT[i] < MIN)
            min = i + 1;
    }
    
    cout << "Most food was eaten by monkey #" << max << endl; 
    cout << "Least food was eaten by monkey #" << min << endl;     
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}