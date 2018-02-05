/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 2, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    int size;
    int array[size];
    int n;
    
    //Initialize Variables
    
    cout << "Enter the size of the Array:";
    cin >> size;
    cout << endl;
    
    for (int i = 0; i < size; i++){
        cout << "Enter value " << i + 1 << " of the Array: ";
        cin >> array[i];
    }
    
    cout << "Enter a value N to compare to the array: "; 
    cin >> n;
    
    
    cout << "These are all the values in the array that are larger than N" << endl;
    
    for (int i = 0; i < size; i++){
        if (array[i] > n)
            cout << array[i] << endl; 
    }
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}