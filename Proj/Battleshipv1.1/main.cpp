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
            //Number of ships per player
            P1SHIPS = 5,
            P2SHIPS = 5,
            
            //Ship Hit Counter
            P1_AC_HIT = 0,
            P1_BS_HIT = 0,
            P1_C_HIT = 0,
            P1_S_HIT = 0,
            P1_D_HIT= 0,
            P2_AC_HIT = 0,
            P2_BS_HIT = 0,
            P2_C_HIT = 0,
            P2_S_HIT = 0,
            P2_D_HIT = 0,
            
            //ship sizes
            AIRSHIP = 5,
            BATTSHIP = 4,
            CRUISER = 3,
            SUBMARINE = 3,
            DESTROY = 2;
            
    string
            //Player 1
            P1,         //name
            P1_AC_X,    //Player 1, Aircraft Carrier, X-Coordinate(s)
            P1_AC_Y,    //Cnt..
            P1_BS_X,
            P1_BS_Y,
            P1_C_X,
            P1_C_Y,
            P1_S_X,
            P1_S_Y,
            P1_D_X,
            P1_D_Y,
            
            //Player 2
            P2,
            P2_AC_X,
            P2_AC_Y,
            P2_BS_X,
            P2_BS_Y,
            P2_C_X,
            P2_C_Y,
            P2_S_X,
            P2_S_Y,
            P2_D_X,
            P2_D_Y,
            
            TEMP;
    
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
    cout << " 0123456789" << endl;
    for (int i = 0; i < 10; i++){           //row
        cout << i;
        for (int j = 0; j < 10; j ++){      //column
                cout << "-";
        }
        cout << endl;
    }   
    
    //location of ships
    int a,      //x
            b;  //y
    char o;     //orientation
    
    
    cout << "Enter two digits up to 10 for the origin(x,y)\nand one letter for horizontal or vertical(h/v)\n";
    cout << "EX: 3 4 h  will output:\n";

    //Aircraft Carrier P1
    cout << ">Aircraft Carrier(5 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 5; i++){
        switch (o){
            case 'v':
                P1_AC_X = to_string(a);
                TEMP = to_string(b - i);
                P1_AC_Y += TEMP;
                break;
            case 'h':
                P1_AC_Y = to_string(b);
                TEMP = to_string(a + i);
                P1_AC_X += TEMP;
                break;
        }    
    }
    
    
    cout << ">Battleship (4 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 4; i++){
        switch (o){
            case 'v':
                P1_BS_X = to_string(a);
                TEMP = to_string(b - i);
                P1_BS_Y += TEMP;
                break;
            case 'h':
                P1_BS_Y = to_string(b);
                TEMP = to_string(a + i);
                P1_BS_X += TEMP;
                break;
        }
        
    }
    
    cout << ">Cruiser (3 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 4; i++){
        switch (o){
            case 'v':
                P1_C_X = to_string(a);
                TEMP = to_string(b - i);
                P1_C_Y += TEMP;
                break;
            case 'h':
                P1_C_Y = to_string(b);
                TEMP = to_string(a + i);
                P1_C_X += TEMP;
                break;
        }
        
    }
    cout << ">Submarine (3 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 3; i++){
        switch (o){
            case 'v':
                P1_S_X = to_string(a);
                TEMP = to_string(b - i);
                P1_S_Y += TEMP;
                break;
            case 'h':
                P1_S_Y = to_string(b);
                TEMP = to_string(a + i);
                P1_S_X += TEMP;
                break;
        }
        
    }

    cout << ">Destroyer (2 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 2; i++){
        switch (o){
            case 'v':
                P1_D_X = to_string(a);
                TEMP = to_string(b - i);
                P1_D_Y += TEMP;
                break;
            case 'h':
                P1_D_Y = to_string(b);
                TEMP = to_string(a + i);
                P1_D_X += TEMP;
                break;
        }
        
    }
    
    
    //Player 2
    //Aircraft Carrier P1
    cout << ">Aircraft Carrier(5 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 5; i++){
        switch (o){
            case 'v':
                P2_AC_X = to_string(a);
                TEMP = to_string(b - i);
                P2_AC_Y += TEMP;
                break;
            case 'h':
                P2_AC_Y = to_string(b);
                TEMP = to_string(a + i);
                P2_AC_X += TEMP;
                break;
        }
        
    }
    
    cout << ">Battleship (4 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 4; i++){
        switch (o){
            case 'v':
                P2_BS_X = to_string(a);
                TEMP = to_string(b - i);
                P2_BS_Y += TEMP;
                break;
            case 'h':
                P2_BS_Y = to_string(b);
                TEMP = to_string(a + i);
                P2_BS_X += TEMP;
                break;
        }
        
    }
    
    cout << ">Cruiser (3 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 4; i++){
        switch (o){
            case 'v':
                P2_C_X = to_string(a);
                TEMP = to_string(b - i);
                P2_C_Y += TEMP;
                break;
            case 'h':
                P2_C_Y = to_string(b);
                TEMP = to_string(a + i);
                P2_C_X += TEMP;
                break;
        }
        
    }
    cout << ">Submarine (3 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 3; i++){
        switch (o){
            case 'v':
                P2_S_X = to_string(a);
                TEMP = to_string(b - i);
                P2_S_Y += TEMP;
                break;
            case 'h':
                P2_S_Y = to_string(b);
                TEMP = to_string(a + i);
                P2_S_X += TEMP;
                break;
        }
        
    }

    cout << ">Destroyer (2 UNITS):";
    cin >> a >> b >> o;
    for (int i = 0; i < 2; i++){
        switch (o){
            case 'v':
                P2_D_X = to_string(a);
                TEMP = to_string(b - i);
                P2_D_Y += TEMP;
                break;
            case 'h':
                P2_D_Y = to_string(b);
                TEMP = to_string(a + i);
                P2_D_X += TEMP;
                break;
        }
        
    }
    
    //Ship Values on map

    
    while (P1SHIPS > 0 && P2SHIPS > 0){
        //Player 1
        cout << "---" << P1 << "'s Turn---" << endl;
        cout << "You have " << P1SHIPS << " Ships Left" << endl;
        cout << "Enter attack coordinates (X Y):";
        cin >> X >> Y;
        
        
        
        //aircraft carrier
        for (int i; i < 5; i++){    
            if (X == P1_AC_X[0] - '0' && Y == P1_AC_Y[i] - '0' || X == P1_AC_X[i] - '0' && Y == P1_AC_Y[0] - '0'){
                cout << "It's a hit!";
                P1_AC_HIT++;
                if (P1_AC_HIT == 5){
                    P2SHIPS--;
                    cout << "Aircraft Carrier Destroyed" << endl;
                    cout << P2SHIPS << " Ships Remaining";
                }  
            }
    }
        
        //Battleship
        for (int i; i < 4; i++){
            if (X == P1_BS_X[0] - '0' && Y == P1_BS_Y[i] - '0' || X == P1_BS_X[i] - '0' && Y == P1_BS_Y[0] - '0'){
                cout << "It's a hit!";
                P1_BS_HIT++;
                if (P1_BS_HIT == 4){
                    P2SHIPS--;
                    cout << "Battleship Destroyed" << endl;
                    cout << P2SHIPS << " Ships Remaining";
                }
            }
            else if (X == P1_BS_X[i] - '0' && Y == P1_BS_Y[0] - '0'){
                cout << "It's a hit!";
                P1_BS_HIT++;
                if (P1_BS_HIT == 4){
                    P2SHIPS--;
                    cout << "Battleship Destroyed" << endl;
                    cout << P2SHIPS << " Ships Remaining";
                }
            }
        }
        
        //Cruiser
        for (int i; i < 3; i++){    
            if (X == P1_C_X[0] - '0' && Y == P1_C_Y[i] - '0' || X == P1_C_X[i] - '0' && Y == P1_C_Y[0] - '0'){
                cout << "It's a hit!";
                P1_C_HIT++;
                if (P1_C_HIT == 3){
                    P2SHIPS--;
                    cout << "Cruiser Destroyed" << endl;
                    cout << P2SHIPS << " Ships Remaining";
                }
            }
        }
        
        //Submarine
        for (int i; i < 3; i++){    
            if (X == P1_S_X[0] - '0' && Y == P1_S_Y[i] - '0' || X == P1_S_X[i] - '0' && Y == P1_S_Y[0] - '0'){
                cout << "It's a hit!";
                P1_S_HIT++;
                if (P1_S_HIT == 3){
                    P2SHIPS--;
                    cout << "Submarine Destroyed" << endl;
                    cout << P2SHIPS << " Ships Remaining";
                }
            }
        }
        
        //Destroyer
        for (int i; i < 2; i++){    
            if (X == P1_D_X[0] - '0' && Y == P1_S_Y[i] - '0' || X == P1_D_X[i] - '0' && Y == P1_D_Y[0] - '0'){
                cout << "It's a hit!";
                P1_D_HIT++;
                if (P1_D_HIT == 2){
                    P2SHIPS--;
                    cout << "Destroyer Destroyed" << endl;
                    cout << P2SHIPS << " Ships Remaining";
                }
            }
            else
                cout << "Miss!";
                
        }
        
        
        
        
        //Player 2
        cout << "---" << P2 << "'s Turn---" << endl;
        cout << "You have " << P2SHIPS << "Ships Left";
        cout << "Enter attack coordinates (X Y):";
        cin >> X >> Y;
        
        //aircraft carrier
        for (int i; i < 5; i++)    
            if (X == P2_AC_X[0] - '0' && Y == P2_AC_Y[i] - '0' || X == P2_AC_X[i] - '0' && Y == P2_AC_Y[0] - '0'){
                cout << "It's a hit!";
                P2_AC_HIT++;
                if (P2_AC_HIT == 5){
                    P1SHIPS--;
                    cout << "Aircraft Carrier Destroyed" << endl;
                    cout << P1SHIPS << " Ships Remaining";
                }
            }       
        
        //Battleship
        for (int i; i < 4; i++){
            if (X == P2_BS_X[0] - '0' && Y == P2_BS_Y[i] - '0' || X == P2_BS_X[i] - '0' && Y == P2_BS_Y[0] - '0'){
                cout << "It's a hit!";
                P2_BS_HIT++;
                if (P2_BS_HIT == 4){
                    P1SHIPS--;
                    cout << "Battleship Destroyed" << endl;
                    cout << P1SHIPS << " Ships Remaining";
                }
            }
        }
        
        //Cruiser
        for (int i; i < 3; i++){    
            if (X == P2_C_X[0] - '0' && Y == P2_C_Y[i] - '0' || X == P2_C_X[i] - '0' && Y == P2_C_Y[0] - '0'){
                cout << "It's a hit!";
                P2_C_HIT++;
                if (P2_C_HIT == 3){
                    P1SHIPS--;
                    cout << "Cruiser Destroyed" << endl;
                    cout << P1SHIPS << " Ships Remaining";
                }
            }
        }
        
        //Submarine
        for (int i; i < 3; i++){    
            if (X == P2_S_X[0] - '0' && Y == P2_S_Y[i] - '0' || X == P2_S_X[i] - '0' && Y == P2_S_Y[0] - '0'){
                cout << "It's a hit!";
                P2_S_HIT++;
                if (P2_S_HIT == 3){
                    P1SHIPS--;
                    cout << "Submarine Destroyed" << endl;
                    cout << P1SHIPS << " Ships Remaining";
                }
            }
        }
        
        //Destroyer
        for (int i; i < 2; i++){    
            if (X == P2_D_X[0] - '0' && Y == P2_S_Y[i] - '0' || X == P2_D_X[i] - '0' && Y == P2_D_Y[0] - '0'){
                cout << "It's a hit!";
                P2_D_HIT++;
                if (P2_D_HIT == 2){
                    P1SHIPS--;
                    cout << "Destroyer Destroyed" << endl;
                    cout << P1SHIPS << " Ships Remaining";
                }
            }
        }
    }

    
    cout << "Congrats " << (P1SHIPS > P2SHIPS ? P1 : P2) << " You are victorious!";
        
    
    
    
    
    
    return 0;
}