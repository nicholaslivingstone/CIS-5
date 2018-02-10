/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on January 29, 2018 5:00PM
 * Purpose:  Battleship Game
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
    
    //Game Variables
    int X, Y,   //coordinates of attack
            P1SHIPS = 5,
            P2SHIPS = 5,
            //ship sizes
            AIRSHIP = 5,
            BATTSHIP = 4,
            CRUISER = 3,
            SUBMARINE = 3,
            DESTROY = 2,
            
            
            //Player 1
            P1AC,
            P1ACL,
            P1BS,
            P1BSL,
            P1C,
            P1CL,
            P1S,
            P1SL,
            P1D,
            P1DL,
            
            //Player 2
            P2AC,
            P2ACL,
            P2BS,
            P2BSL,
            P2C,
            P2CL,
            P2S,
            P2SL,
            P2D,
            P2DL;  
    
    char 
        //ship orientation
        //P1
        P1ACO,
            P1BSO,
            P1CO,
            P1SO,
            P1DO,
        //P1
            P2ACO,
            P2BSO,
            P2CO,
            P2SO,
            P2DO;
    
    string P1, P2,      //names of players
            P1AIRCRAFT,
            P1BATTLE,
            P1CRUISER,
            P1SUB,
            P1DEST,
            
            P2AIRCRAFT,
            P2BATTLE,
            P2CRUISER,
            P2SUB,
            P2DEST;
    
    //Game Introduction
    cout << "WELCOME TO BATTLE SHIP\n--------------------"<< endl;
    cout << ">Destroy your opponents ships before he destroys yours"<< endl;
    cout << ">You have a fleet of 5 ships\n";
    cout << ">You have a battle field 10x10 units large\n";
    

    
    //Player name input
    cout << "Player 1 name: ";
    cin >> P1;
    cout << "Player 2 name: ";
    cin >> P2;
    cout << endl << endl;
    
    
    //Player 1 Ship Placement
    cout << "COMMANDER " << P1 << " READY YOUR SHIPS" << endl;
    cout << "   BATTLEFIELD MAP:" << endl;
    
    //display a blank board
    cout << " |0|1|2|3|4|5|6|7|8|9|" << endl;
    for (int i = 0; i < 10; i++){           //row
        cout << i;
        for (int j = 0; j < 11; j ++){      //column
                cout << "| ";
        }
        cout << endl;
    }   
    
    //location of ships
    int a,  //x
            b;    //y
    char    o;      //orientation
    string TEMP;
    
    
    cout << "Enter two digits up to 10 for the origin(x,y)\nand one letter for horizontal or vertical(h/v)\n";
    cout << "EX: 3 4 h\n";

    //Aircraft Carrier P1
    cout << ">Aircraft Carrier(5 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 5; i++){
        switch (o){
            case 'v':
                P1AIRCRAFT =  
            case 'h':
                P1AIRCRAFT = 
        }
        
    }
    

        
    
    
    cout << ">Battleship (4 UNITS):";
    cin >> P1BSX >> P1BSY >> P1BSO;
    cout << ">Cruiser (3 UNITS):";
    cin >>  >> P1CY >> P1CO;
    cout << ">Submarine (3 UNITS):";
    cin >> P1SX >> P1SY >> P1SO;
    cout << ">Destroyer (2 UNITS):";
    cin >> P1DX >> P1DY >> P1DO;
    
    //Ship Values on map

    
    while (P1SHIPS > 0 && P2SHIPS > 0){
        //Player 1
        cout << "---" << P1 << "'s Turn---" << endl;
        cout << "Enter attack coordinates (X Y):";
        cin >> X >> Y;
        
        //aircraft carrier
        for (int i = 0; i < 5; i++){
            int 
            if (X == X1)
        }
        if (X == ship && y == shipcoord){
            cout << "It's a hit!";
            //aircraft carrier
            for (int i = 0; i < 5; i++)
                
        }
        //
        else
            cout << "Missed!";
        
        
        //Player 2    
        cout << "---" << P2 << "'s Turn---" << endl;
        cout << "Enter attack coordinates (X Y):";
        cin >> X >> Y;
        if (X == shipcoord && y == shipcoord){
            cout << "It's a hit!";
            
        }

        
        else
            cout << "Missed!";   
    }
    
    cout << "Congrats " << P1SHIPS > P2SHIPS ? P1 : P2 << " You are victorious!";
        
    
    
    
    
    
    return 0;
}