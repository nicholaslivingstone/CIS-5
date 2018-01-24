/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 23, 2018
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time Library for random seed
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Loop on Menu and problems
    do{
    
        //Menu with input of choice
        cout<<endl;
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Problem 1 -> Gaddis_8th_chap5_1_sumOfNumbers"<<endl;
        cout<<"Problem 2 -> Gaddis_8th_chap5_3_OceanLevels"<<endl;
        cout<<"Problem 3 -> Gaddis_8th_chap5_5_MembershipFees"<<endl;
        cout<<"Problem 4 -> Gaddis_8th_chap5_6_DistanceTraveled"<<endl;
        cout<<"Problem 5 -> Gaddis_8th_chap5_7_PenniesForPay"<<endl;
        cout<<"Problem 6 -> Gaddis_8th_chap5_10_AverageRain"<<endl;
        cout<<"Problem 7 -> Gaddis_8th_chap5_17_SalesBarChart"<<endl;
        cout<<"Problem 8 -> Gaddis_8th_chap5_20_GuessingGame"<<endl;
        cout<<"Problem 9 -> Gaddis_8th_chap5_21_GuessingGameENHANCED"<<endl;
        cout<<"Type 1 to 9 only"<<endl<<endl;
        cin>>probNum;
    
        //Output the results
        switch(probNum){
            case 1: {
                //Set the random number seed
                int num;
    //Initialize Variables
    
    //Process/Map inputs to outputs
                cout << "Input a positive integer to calculate the sum of all numbers: ";
                cin >> num;
    
                while (num < 0){        //verifies the number is positive
                    cout << "ERROR: Please enter a positive integer: ";
                    cin >> num;
                }
    
                break;
            }    
            case 2: {
                //Declare Variables
                int year;
    
                cout << "The Rise of Sea Levels over 25 Years" << endl;
                cout << "Year" << setw (15) << "Rise (mm)" << endl;
                cout << "-------------------------" << endl;
    
                for (year = 1; year <= 25; year++){
                    cout << year << setw(15) << 1.5 * year << endl; 
                }
                break;
            }
            case 3: {
                //Declare Variables
                int year;
                float rate = 1;
   
                cout << "Cost of the Country Club" << endl;
                cout << "Year" << setw (17) << "Membership Fee" << endl;
                cout << "-------------------------" << endl;
    
                for (year = 1; year <= 6; year++, rate += .04)
                    cout << year << setw(15) << rate * 2500  << endl; 
                break;
            }
            case 4: {
                float distance, speed, time;
    
                cout << "What is the speed of the vehicle in MPH?  ";
                cin >> speed;
                cout << "How many hours has it traveled?  ";
                cin >> time;
    
                cout << "Hour" << setw (18) << "Distance(miles)" << endl;
                cout << "-------------------------" << endl;
    
                for (int hour = 1; hour <= time; hour++){
                    distance += speed;
                    cout << hour << setw(15) << distance << endl;
                }
                break;
            }
            case 5: {
                int days;
                float total = 0 , penny = .01;
    
                cout << "This will calculate the earnings of a salary of a penny+ 1 a day" << endl;
                cout << "How many days of savings should be estimated?" << endl;
                cin >> days;


                cout << "Day" << setw(17) << "Earnings" << setw(25) << "Total Savings" << endl;
                cout << "-----------------------------------------------" << endl;
    
                for (int day = 1; day <= days; penny += .01, day++){
                    total += penny;
                    cout << day << setw(17) << penny << setw(25) << total << endl;
                }
                break;
            }
            case 6: {
                int year, month;
                float rain, total;
                cout << "How many years of rainfall should be estimated? ";
                cin >> year;
    
    
                while (year <= 0){
                    cout << "ERROR: Enter a valid number of years: ";
                    cin >> year;
                }

    

                for (int i = 1; i <= year; i++){
                    cout << "Year " << i << ":" << endl;
                    for (int month = 1; month <= 12 ; month++){
                        cout << "Month " << month << " Inches of Rainfall: ";
                        cin >> rain;
                        total += rain;
                    }
                }
    
                cout << endl;
                cout << "Months: " << year * 12 << endl;
                cout << "Total Inches of Rainfall: " << total << endl;
                cout << "Average Rainfall Per Month: " << setprecision(2) << fixed << total / (year * 12) << " Inches";
            }
            case 7: {
                int sales1,
                        sales2,
                        sales3,
                        sales4,
                        sales5;
    
                //gather data from user
                cout << "Enter today's sales below:" << endl;
                cout << "Store 1: $";
                cin >> sales1;
                cout << "Store 2: $";
                cin >> sales2;
                cout << "Store 3: $";
                cin >> sales3;
                cout << "Store 4: $";
                cin >> sales4;
                cout << "Store 5: $";
                cin >> sales5;
    
                //begin output

                cout << "SALES BAR CHART" << endl;
                cout << "(Each * = $100)" << endl;
                cout << "Store 1: ";
                for (int i = 0; i < sales1 / 100; ++i)
                    cout << '*';
                cout << endl << "Store 2: ";
                for (int i = 0; i < sales2 / 100; ++i)
                    cout << '*';
                cout << endl << "Store 3: ";
                for (int i = 0; i < sales3 / 100; ++i)
                    cout << '*';
                cout << endl << "Store 4: ";
                for (int i = 0; i < sales4 / 100; ++i)
                    cout << '*';
                cout << endl << "Store 5: ";
                for (int i = 0; i < sales5 / 100; ++i)
                    cout << '*';
                break;
            }
            case 8: {
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
                break;
            }
            case 9: {
                unsigned seed = time(0);
                srand(seed);

                int guess,  //guess of the user
                        number, //the number the computer selected
                        count = 1;  //how many tries it took the player

                cout << "~~A GUESSING GAME~~" << endl;
                cout << "Enter a number 1-100 to see if you can guess the computer's." << endl;

                //Random number generator
                const int MIN = 1;
                const int MAX = 100;
                number = (rand() % (MAX - MIN + 1)) + MIN;


                cin >> guess;   //input initial guess


                while (guess != number){    //loop while the guess is incorrect
                    if (guess > number)
                        cout << "Too High!" << endl;
                    else if (guess < number)
                        cout << "Too Low!" << endl;
                    cin >> guess;
                    count++;
                }

                cout << "Congrats you've guessed the number!" << endl;
                cout << "It took you " << count;
                if (count == 1)
                    cout << " try! You must be a wizard!";
                else
                    cout << " tries";
                break;
            }
            default:cout<<"You choose to exit"<<endl;
        }
    }while(probNum>=1&&probNum<=9);
   
    //Exit
    return 0;
}