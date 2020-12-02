#pragma once

#include <iostream>
#include "Game.h"
using namespace std;

void PrintGameField(char board[][3], int size){
    for (int i = 0; i < size ; ++i) {
        for (int j = 0; j < size ; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "---------" << endl;
    }
}




int InputCoordinate(){
    int coordinate;
    do {
        cout << " enter coordinate (from 0 to 2) " << endl;
        cin >> coordinate;

    } while (!Check(coordinate));
    return coordinate;

}
