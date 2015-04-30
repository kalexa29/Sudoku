//
//  Puzzle.cpp
//  Sudoku
//
//  Created by Katelynn Alexander on 4/10/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#include "Puzzle.h"

//constructor
Puzzle::Puzzle(std::string gridStr[VALUES]){
    int cellIndex = 0;
    for(int i = 0; i < CELLY; i++){
        possible[i][0] = false;
        for(int d = 1; d < VALUES; d++){
            possible[i][d]=true;
        }
    }
    for(int row=0; row < VALUES; row++){
        for(int col=0; col < VALUES; col++){
            cell[cellIndex = gridStr[row][col]]-'0';
            if(cell[cellIndex]>0){
                markPossible(cellIndex, cell[cellIndex]);
            }
            cellIndex++;
        }
    }
}

//copy constructor
Puzzle::Puzzle(Puzzle *orig){
    for(int i = 0; i < CELLY; i++){
        cell[i] = orig->cell[i];
        for(int d = 0; d < VALUES; d++){
            possible[i][d] = orig->possible[i][d];
        }
    }
}

Puzzle* Puzzle::solve(){
    return solveRec(0, this);
}

Puzzle* Puzzle::solveRec(int pos, Puzzle *grid){
    return grid;
}

int Puzzle::digitCode(){
    return cell[0]*100 + cell[1]*10 + cell[2];
}

void Puzzle::markPossible(int index, int value){
    int row = index / VALUES;
    int col = index % VALUES;
    
    int rowIndex = row * VALUES;
    int colIndex = col;
    int box = row/3 * 3 + col/3;
    int boxIndex;
    for(int i = 0; i < VALUES; i++){
        boxIndex = POSSIBILITIES[box][i];
        if(rowIndex != index){
            possible[rowIndex][value] = false;
        }
        if(colIndex != index){
            possible[boxIndex][value] = false;
        }
        if(boxIndex != index){
            possible[boxIndex][value]=false;
        }
        rowIndex++;
        colIndex+=9;
    }
    possible[index][value] = true;
}

std::ostream &operator<<(std::ostream &output, Puzzle *grid){
    for(int i = 0; i < grid->CELLY; i++){
        output << grid->cell[i] << ' ';
        if((i % grid->VALUES) == grid->VALUES-1){
            //NOT DONE!!
        }
    }
    return output;
}
