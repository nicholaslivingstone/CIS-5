/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 2, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    string n1, n2, n3, first, second, third;
    float t1, t2, t3;
    
    cout << "Enter the names of 3 racers and their times below" << endl;
    cout << "First name: ";
    cin >> n1;
    cout << "Their time: ";
    cin >> t1;
    cout << "Second name: ";
    cin >> n2;
    cout << "Their time ";
    cin >> t2;
    cout << "Third name: ";
    cin >> n3;
    cout << "Their time: ";
    cin >> t3;
    

    if (t1 > t2 && t1 > t3){
        if (t2 > t3){
    cout << "First: " << n3 << endl;
    cout << "Second: " << n2 << endl;
    cout << "Third: " << n1;
        }
        else if (t2 < t3){
    cout << "First: " << n2 << endl;
    cout << "Second: " << n3 << endl;
    cout << "Third: " << n1;
        }
    }
    else if (t2 > t3 && t2 > t1){
        if (t3 > t1){
    cout << "First: " << n1 << endl;
    cout << "Second: " << n3 << endl;
    cout << "Third: " << n2;
        }
        else if (t3 < t1){
    cout << "First: " << n3 << endl;
    cout << "Second: " << n1 << endl;
    cout << "Third: " << n2;
        }
    }
    else if (t3 > t2 && t3 > t1){
        if (t1 > t2){
    cout << "First: " << n2 << endl;
    cout << "Second: " << n1 << endl;
    cout << "Third: " << n3;
        }
        else if (t2 > t1){
    cout << "First: " << n1 << endl;
    cout << "Second: " << n2 << endl;
    cout << "Third: " << n3;
        }
    }

    else if (t1 <= 0 || t2 <= 0 || t3 <= 0)
        cout << "Please enter times greater than 0";
    

    
   
            
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}