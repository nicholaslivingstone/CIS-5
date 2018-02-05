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
int search (int [], int, int);
void bubbleSortArray(int [], int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int ACCNT;
    const int SET = 18;
    int accounts[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255,1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
    
    bool valid;
    
    cout << "Account Number: ";
    cin >> ACCNT;
    
    int results = search(accounts, SET, ACCNT);
    
    if (results == -1)
        cout << "That account is not valid";
    else 
        cout << "The account is valid";
    
    
    
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

void bubbleSortArray(int array[], int elems)
{
    bool swap;
    int temp, bottom = elems - 1;
    do
    {
        swap = false;
        for (int count = 0; count < bottom; count++)
        {
            if (array[count] > array[count+1])
            {
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;
            }
        }
        bottom--;
    }
    while(swap != false);
}