//
//  Puzzle.h
//  Sudoku
//
//  Created by Katelynn Alexander on 4/10/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#ifndef __Sudoku__Puzzle__
#define __Sudoku__Puzzle__

#include <stdio.h>
#include <iostream>

class Puzzle {
public:
    static const int VALUES = 9;
    static const int CELLY = 81;
    const int POSSIBILITIES[VALUES][VALUES]={
        {0, 1, 2, 9, 10, 11, 18, 19, 20},
        {3, 4, 5, 12, 13, 14, 21, 22, 23},
        {6, 7, 8, 15, 16, 17, 24, 25, 26},
        {27, 28, 29, 36, 37, 38, 45, 46, 47},
        {30, 31, 32, 39, 40, 41, 48, 49, 50},
        {33, 34, 35, 42, 43, 44, 51, 52, 53},
        {54, 55, 56, 63, 64, 65, 72, 73, 74},
        {57, 58, 59, 66, 67, 68, 75, 76, 77},
        {60, 61, 62, 69, 70, 71, 78, 79, 80}
    };
    
    //constructors
    Puzzle(std::string gridStr[VALUES]);
    Puzzle(Puzzle *orig);
    
    friend std::ostream &operator<<(std::ostream &output, Puzzle *grid);
    
    int digitCode();
    
    Puzzle* solve();
    
private:
    
    int cell[CELLY];
    bool possible[CELLY][VALUES+1];
    void markPossible(int index, int value);
    Puzzle* solveRec(int pos, Puzzle *grid);
    bool solutionFound();
    
    
};

#endif /* defined(__Sudoku__Puzzle__) */
