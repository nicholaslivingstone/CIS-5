/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 17, 2018
 * Purpose:  Mix primary colors
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
    //Declare Variables
    string color1, color2;
    
    cout << "Enter two different primary colors below to mix them\n(red blue or yellow)" << endl;
    cout << "First Color: ";
    cin >> color1;
    cout << "Second Color: ";
    cin >> color2;
    
    if (color1 == "red"){
        if (color2 == "blue")
            cout << "The resulting color is purple";
        else if (color2 == "yellow")
            cout << "The resulting color is orange";
        else 
            cout << "Please enter a valid color";
    }
    else if (color1 == "blue"){
        if (color2 == "red")
            cout << "The resulting color is purple";
        else if (color2 == "yellow")
            cout << "The resulting color is green";
        else 
            cout << "Please enter a valid color";
    }
    else if (color1 == "yellow"){
        if (color2 == "blue")
            cout << "The resulting color is green";
        else if (color2 == "red")
            cout << "The resulting color is orange";
        else 
            cout << "Please enter a valid color";
    }
    else
        cout << "Please enter a valid color";
        
    
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}