//
//  Puzzle.h
//  Sudoku
//
//  Created by Katelynn on 4/10/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#ifndef __Sudoku__Puzzle__
#define __Sudoku__Puzzle__

#include <stdio.h>

class Puzzle {
public:
    //constructor
    Puzzle();
    
    //getters
    int getRow();
    int getCol();
    int getBox();
    //setters
    
    //extras
    void solve();
    
private:
//    int ROW, COL, LENGTH;
//    int puzz[LENGTH];
//    int[ROW][COL] possibly;
    int row;
    int col;
    int box;
};

#endif /* defined(__Sudoku__Puzzle__) */
