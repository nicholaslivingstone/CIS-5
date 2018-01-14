/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 12, 2018
 * Purpose:  Calculate box office revenue for a theater
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string movie; 
    float atix,     //adult tickets
            atixp,  //profit from adult tickets
            ktix,   //kid tickets
            ktixp,  //profit from kid tickets
            gp,     //gross profit
            np,     //net profit
            dist;   //amount paid to the distributor
    
    cout << "Movie Name: ";
    getline(cin, movie);
    
    cout << "Number of Adult tickets: ";
    cin >> atix;
    
    cout << "Number of child tickets: ";
    cin >> ktix;
    
    //Math
    //Calculate revenue of child and adult tickets
    atixp = 10 * atix;
    ktixp = 6 *ktix;
    
    gp = atixp + ktixp; //total revenue
    
    np = gp * 0.2;
    
    dist = gp - np;
    
    //display
       cout << setprecision(2) << fixed;
    cout << "Gross box office profit.........$" << gp << endl;
    cout << "Net Box office profit...........$" << setw(1) << np << endl;
    cout << "Paid to the distributor:........$" << dist;
   
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}