/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 3, 2018
 * Purpose:  Calculate Average Number of Days Missed of Employees
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int EMPLCONT();
int DAYMISS(int);
double AVG (int, int);  //Average number of days absent
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int cont = EMPLCONT();
    int days = DAYMISS(cont);
    
    cout << "Average number of days missed: " << AVG(days,cont);   //output average number of days;
    
    //Exit stage right!
    return 0;
}

int EMPLCONT(){
    int EMP;    //number of employees
    cout << "How many employees are in the company?" << endl;
    cin >> EMP;
    while (EMP < 1){
        cout << "ERROR: ENTER A VALID NUMBER OF EMPLOYEES" << endl;    //validate the number of employees is > 0
        cin >> EMP;
    }
    return EMP;
}

int DAYMISS(int COUNT){
    int days,                               //input of days for each employee
            total = 0;                      //total number of missed days in the company
    for (int i = 1; i <= COUNT; i++){       //loop input for each employee
        cout << "How many days did employee #" << i << " miss?" << endl;
        cin >> days;
        while (days < 0){                   //validate that the number of days is not negative
            cout << "ERROR: INVALID NUMBER OF DAYS" << endl;
            cin >> days;
        }
        total += days;  //add to total number of days
    }
    return total;
}

double AVG(int DAYS, int EMPCOUNT){
    return DAYS / EMPCOUNT;
}