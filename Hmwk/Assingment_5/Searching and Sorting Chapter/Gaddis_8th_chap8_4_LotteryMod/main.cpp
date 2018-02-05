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
int search(int [], int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int numbers [10] = {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    
    int lottery;
    cout << "Enter your lottery numbers: ";
    cin >> lottery;
    
    
    int results = search(numbers, 10, lottery);
    
    if (results == -1)
        cout << "You have not won this week";
    else 
        cout << "Congrats you have won!";
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}

int search(int array[], int size, int value){
    int position = - 1,
            first = 0,
            middle,
            last = size -1;
    bool found = false;
    
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (array[middle] == value){
            found = true;
            position = middle ;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}
