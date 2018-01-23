/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 22, 2018
 * Purpose:  Guessing Game
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
    unsigned seed = time(0);
    srand(seed);
    
    int guess, number;
    
    cout << "~~A GUESSING GAME~~" << endl;
    cout << "Enter a number 1-100 to see if you can guess the computer's." << endl;
   
    const int MIN = 1;
    const int MAX = 100;
    number = (rand() % (MAX - MIN + 1)) + MIN;
    
    cin >> guess;
    while (guess != number){    //loop while the guess is incorrect
        if (guess > number)
            cout << "Too High!" << endl;
        else if (guess < number)
            cout << "Too Low!" << endl;
        cin >> guess;
    }
    
    cout << "Congrats you've guessed the number!";


    //Exit stage right!
    return 0;
}