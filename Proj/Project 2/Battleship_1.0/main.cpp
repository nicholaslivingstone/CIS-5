/* 
 * File:   main.cpp
 * Author: Nicholas Livingstone
 * Created on February 6, 2018;
 * Purpose:  Battleship game 
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
void PrintBoard(int [10][10]);
void BlankBoard();
void GameBoard(bool [10][10]);
int ConvertRow(char);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Ship count
    int P1SHIPS = 5,
            P2SHIPS = 5;
    bool    
            //Ship Locations
            P1BOARD[10][10] = { false },
            P2BOARD[10][10] = { false };
            
    
    //player names
    string P1NAME,
            P2NAME;
    
    
   
    

    cout << "B A T T L E S H I P\n"
            "-------------------"<< endl;
    
    //menu selection
    int choice;
    do{
        cout << "1. Play Game\n"
                "2. Rules\n"
                "3. Quit the program\n"
                "Enter your choice:";
        cin >> choice;
    
        switch(choice){
            case 1:
                break;
            case 2:
                cout << "Destroy your opponents ships before he destroys yours\n"
                        "You have a fleet of 5 ships at your disposal\n"
                        "Place your ships strategically on a 10x10 grid\n"
                        "Determine the location of opponents ships and bomb them before they do the same\n"
                        "The last person to still have ships remaining is victorious\n";
                break; 
            case 3:
                cout << "PROGRAM ENDING";
                return 0;
        }
        cout << endl;
    }
    while (choice == 2);
    
    
    
    //Get Player Names
    cout << "Player 1 name: ";
    cin >> P1NAME;
    cout << "Player 2 name: ";
    cin >> P2NAME;
    cout << endl << endl;
    
    BlankBoard();
    
    char orient, row;
    int rownum, col;
    
    //PLAYER 1 SETUP
    cout << P1NAME << endl; 
    cout << "Enter an orientation(h/v), row, and column for each ship\n"
            "Each separated by spaces\n"
            "Ex: h e 4\n";
    
    cout << "Aircraft Carrier(5 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 5; i++){
                while (P1BOARD[rownum][col+i] == true || P1BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 5; i++){
                P1BOARD[rownum][col + i] = true;
            }
            break;
        case 'v':
            for(int i = 0; i < 5; i++){
                P1BOARD[rownum - i][col] = true;
            }
            break;
    }
    
    GameBoard(P1BOARD);
    
    //Battleship
    cout << "Battleship(4 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 4; i++){
                while (P1BOARD[rownum][col+i] == true || P1BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 4; i++){
                P1BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 4; i++){
                P1BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P1BOARD);
    
    //Cruiser
    cout << "Cruiser(3 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 3; i++){
                while (P1BOARD[rownum][col+i] == true || P1BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 3; i++){
                P1BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 3; i++){
                P1BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P1BOARD);
    
    //Submarine
    cout << "Submarine(3 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 3; i++){
                while (P1BOARD[rownum][col+i] == true || P1BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 3; i++){
                P1BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 3; i++){
                P1BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P1BOARD);
    
    //Destroyer
    cout << "Destroyer(2 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 2; i++){
                while (P1BOARD[rownum][col+i] == true || P1BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 2; i++){
                P1BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 2; i++){
                P1BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P1BOARD);
    
    
    //jump 20 lines to clear board
    for (int i; i < 20; i++)
        cout << endl; 

    
    
    
    //PLAYER 2 SETUP
    BlankBoard();
    cout << P2NAME << endl; 
            "Enter an orientation(h/v), row, and column for each ship\n"
            "Each separated by spaces\n"
            "Ex: h e 4\n";
    
    cout << "Aircraft Carrier(5 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 5; i++){
                while (P2BOARD[rownum][col+i] == true || P2BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 5; i++){
                P2BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 5; i++){
                P2BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P2BOARD);
    
    //Battleship
    cout << "Battleship(4 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 4; i++){
                while (P2BOARD[rownum][col+i] == true || P2BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 4; i++){
                P2BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 4; i++){
                P2BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P2BOARD);
    
    //Cruiser
    cout << "Cruiser(3 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 3; i++){
                while (P2BOARD[rownum][col+i] == true || P2BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 3; i++){
                P2BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 3; i++){
                P2BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P2BOARD);
    
    //Submarine
    cout << "Submarine(3 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 3; i++){
                while (P2BOARD[rownum][col+i] == true || P2BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 3; i++){
                P2BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 3; i++){
                P2BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P2BOARD);
    
    //Destroyer
    cout << "Destroyer(2 Units):";
    cin >> orient >> row >> col;
    rownum = ConvertRow(row);
           
    //Check to make sure location is valid
    for(int i = 0; i < 2; i++){
                while (P2BOARD[rownum][col+i] == true || P2BOARD[rownum][col+i] == true){
                    cout << "ERROR INVALID LOCATION\n"
                            "Enter orientation, row, and column again:";
                    cin >> orient >> row >> col;
                    rownum = ConvertRow(row);
                }
            }
    //Place Ship on board
    switch(orient){
        case 'h':
            for(int i = 0; i < 2; i++){
                P2BOARD[rownum][col + i] = true;
            }break;
        case 'v':
            for(int i = 0; i < 2; i++){
                P2BOARD[rownum - i][col] = true;
            }break;
    }
    
    GameBoard(P2BOARD);

    
        //jump 20 lines to clear board
    for (int i; i < 20; i++)
        cout << endl; 
    
    int P1HITCONT = 0,
            P2HITCONT = 0,
            P1ATTACK[10][10] = { 0 },
            P2ATTACK[10][10] = { 0 },
            turn = 1;
    
    do{
        turn++;
        //Player 1
        PrintBoard(P1ATTACK);
        cout << P1NAME << " Enter your attack coordinates:";
        cin >> row >> col;
        rownum = ConvertRow(row);
        if (P2BOARD[rownum][col] == true){
            cout << "It's a hit!\n";
            P1ATTACK[rownum][col] = 1;
            P1HITCONT++;
        }
        else{
            cout << "It's a miss!\n";
            P1ATTACK[rownum][col] = 9;
        }
        PrintBoard(P1ATTACK);

        
        for (int i; i < 20; i++)
        cout << endl; 
        
        
        //Player 2
        PrintBoard(P2ATTACK);
        cout << P2NAME << " Enter your attack coordinates:";
        cin >> row >> col;
        rownum = ConvertRow(row);
        if (P1BOARD[rownum][col] == true){
            cout << "It's a hit!\n";
            P2ATTACK[rownum][col] = 1;
            P2HITCONT++;
        }
        else{
            cout << "It's a miss!\n";
            P2ATTACK[rownum][col] = 9;
        }
        PrintBoard(P2ATTACK);
        
        for (int i; i < 20; i++)
        cout << endl; 
                
                
    }
    while (P1HITCONT < 17 && P2HITCONT < 17);
    
    string winner = P1HITCONT > P2HITCONT ? P1NAME : P2NAME;
    
    cout << winner << "Has destroyed all the battleships!\n"
            "It took" << turn << "turns";

    //Exit stage right!
    return 0;
    
}

//convert the row to a number so the program can use it;
int ConvertRow(char row){
    switch(row){
        case 'a':
            return 0;
            break;
        case 'b':
            return 1;
            break;
        case 'c':
            return 2;
            break;
        case 'd':
            return 3;
            break;
        case 'e':
            return 4;
            break;
        case 'f':
            return 5;
            break;
        case 'g': 
            return 6;
            break;
        case 'h':
            return 7;
            break;
        case 'i': 
            return 8;
            break;
        case 'j':
            return 9;
            break;
    }
}


//Print a blank board
void BlankBoard(){
    cout << " |0|1|2|3|4|5|6|7|8|9|" << endl;
    string rows = {'a','b','c','d','e','f','g','h','i','j'};
   
    for(int i = 0; i < 10; i++){        //loops rows
        cout << rows[i] << "|";               //display row number
        for(int j = 0; j < 10; j++){    //loops columns
            cout << " |";
        }
        cout << endl;
    }
}


//Print Ship Locations
void GameBoard(bool board[10][10]){
    cout << " |0|1|2|3|4|5|6|7|8|9|" << endl;
    string rows = {'a','b','c','d','e','f','g','h','i','j'};
    for(int i = 0; i < 10; i++){        //loops rows
        cout << rows[i] << "|";               //display row number
        for(int j = 0; j < 10; j++){    //loops columns
            if (board[i][j] == true)
                cout << "X|";
            else
                cout << " |";
        }
        cout << endl;
    }
}


//print game board
void PrintBoard(int attack[10][10]){
    cout << "  0|1|2|3|4|5|6|7|8|9|" << endl;
    for(int i = 0; i < 10; i++){        //loops rows
        cout << i << "|";               //display row number
        for(int j = 0; j < 10; j++){    //loops columns
            if (attack[i][j] == 1)      //if it hits place an X
                cout << "X";
            else if (attack[i][j] == 9) //if it misses place O
                cout << "O";
            else
                cout << " ";            //else print nothing
            cout << "|";
            
        }
        
        cout << endl;
    }
}
