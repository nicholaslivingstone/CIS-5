/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 12, 2018
 * Purpose:  Addition Practice by generating random numbers
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
    int n1, n2, total;
    
    unsigned seed = time (0);
    
    srand(seed);
    
    const int Max = 999;
    const int Min = 1;
    
    n1 = (rand() % (Max - Min + 1)) + Min;
    n2 = (rand() % (Max - Min + 1)) + Min;
    
    cout << "Press Enter to generate a random addition problem\nPress Enter again to display the solution";
    getchar();
    
    cout << n1 << endl;
    cout << "+" << n2 << endl;
    cout << "____";
    getchar();
    total = n1 + n2;
    
    cout << endl << total;
    
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}