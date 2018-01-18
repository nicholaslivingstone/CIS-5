/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Generate random numbers and test the user.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n1, n2, total, answer;
    unsigned seed = time(0);
    
    srand(seed);
    
    //set limits of numbers (1-1000)
    const int Max = 999;
    const int Min = 1;
    
    //produce random numbers
    n1 = (rand() % (Max - Min + 1)) + Min;
    n2 = (rand() % (Max - Min + 1)) + Min;
    
    cout << "Press Enter to generate a random addition problem\n";
    getchar();
    
    cout << n1 << " + " << n2 << endl;
    
    total = n1 + n2;
    
    cout << endl << "What's the solution? ";
    cin >> answer;
    
    if (answer == total)
        cout << "That's correct!";
    else
        cout << "That's incorrect.";
    
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}