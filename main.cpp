#include <iostream>
#include "Game.h"
#include "io.h"
using namespace std;


//test commit
void PrintGameField(char board[][3], int size);

int InputCoordinate();

int main() {
    const int SIZE  = 3;
    char gameField[SIZE][SIZE] = {{' ', ' ', ' '},
                                  {' ', ' ', ' '},
                                  {' ', ' ', ' '}};

        bool winx = false, win0 = false, draw = false;
        int col, row;
        PrintGameField(gameField, SIZE);


        do {


            cout << " X TURN! " << endl;
            do {
                row = InputCoordinate();
                col = InputCoordinate();
            } while (gameField[row][col] != ' ');
            gameField[row][col] = 'X';
            PrintGameField(gameField, SIZE);
            winx = WinX(gameField);
            if (winx) break;



            cout << " 0 TURN " << endl;
            do {
                row = InputCoordinate();
                col = InputCoordinate();
            } while (gameField[row][col] != ' ');
            gameField[row][col] = '0';
            PrintGameField(gameField, SIZE);
            win0 = Win0(gameField);
            if (win0) break;



            draw = Draw(gameField, SIZE);
        } while (!draw);


        if (winx) { cout << " X win " << endl; }
        else if (win0) { cout << " o win " << endl; }
        else if (draw) { cout << " draw " << endl; }


    }




