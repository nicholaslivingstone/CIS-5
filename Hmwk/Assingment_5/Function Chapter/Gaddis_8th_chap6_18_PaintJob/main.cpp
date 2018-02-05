/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 3, 2018
 * Purpose:  Calculate cost and supplies of paint job
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int ROOM();
float WALLSPACE(int);
float PPGAL();
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    
    int ROOMS;  //Number of rooms being painted
    double PPG,  //Price per gallon of paint
            TOTWALL; //Total amount of wall space
    
    cout << "PAINT JOB CALCULATOR" << endl;
    cout << ">==================<" << endl;
    
    ROOMS = ROOM();
    PPG = PPGAL();
    
    
    TOTWALL = WALLSPACE(ROOMS);     //calculate and save the total amount of wall SQRFT
    
    double GALLONS = TOTWALL / 110.0,   //how many gallons of paint are needed
            HOURS = 8 * GALLONS,        //how many labor hours will be required
            PAINTCOST = GALLONS * PPG,  //Cost of paint
            LABORCOST = 25 * HOURS,     //Labor Cost
            TOTAL = LABORCOST + PAINTCOST;      //Total Cost
    
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Number of Gallons of Paint Required: " << GALLONS << endl;
    cout << "Hours of Labor Required: " << HOURS << endl;
    cout << "Cost of Paint: $" << PAINTCOST << endl;
    cout << "Cost of Labor: $" << LABORCOST << endl;
    cout << "Total Cost: $" << TOTAL; 
    //Exit stage right!
    return 0;
}

float WALLSPACE(int ROOMS){
    float SPACE, TOTAL = 0;
    for (int i = 1; i <= ROOMS; i++){
        cout << "Square feet of wall for room #" << i << ": ";
        cin >> SPACE;
        while (SPACE < 0){
            cout << "ERROR: INPUT A VALID AMOUNT OF WALL SQUARE FOOTAGE: ";
            cin >> SPACE;
        }
        TOTAL += SPACE;
        
    }
    return TOTAL;
}

int ROOM(){
    int ROOMS;
    cout << "Number of Rooms to be painted: ";
    cin >> ROOMS;
    while (ROOMS < 1){
        cout << "ERROR ENTER A VALID NUMBER OF ROOMS: ";
        cin >> ROOMS;
    }
    return ROOMS;
}

float PPGAL(){
    float PPG;
    cout << "Price Per Gallon of Paint: $";
    cin >> PPG;
    //validate price of paint
    while (PPG < 10){
        cout << "ERROR ENTER A COST OF PAINT GREATER THAN 10: $";
        cin >> PPG;
    }
    return PPG;
}