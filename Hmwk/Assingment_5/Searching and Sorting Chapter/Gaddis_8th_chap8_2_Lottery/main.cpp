/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 4, 2018
 * Purpose:  Check validity of lottery
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
    int numbers [10] = {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    
    int lottery;
    cout << "Enter your lottery numbers: ";
    cin >> lottery;
    bool win;
    for (int i = 0; i < 10; i++){
        if (lottery == numbers[i]){
            win = true;
            cout << "CONGRATS YOU HAVE WON!";
        }
    }
    
    if (win != true)
        cout << "sorry you didn't win this week"; 
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}