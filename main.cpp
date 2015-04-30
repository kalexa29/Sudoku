//
//  main.cpp
//  Sudoku
//
//  Created by Katelynn Alexander on 4/10/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Puzzle.h"

using namespace std;

int main(int argc, const char * argv[]) {
    //read file in to pass to puzzle constructor
    

    ifstream file("/Users/Katelynn/xCode projects/Sudoku/Sudoku/grid1.txt"); //input file stream for getting info from the sudoku file
    string line;
    string grid;
    string gridStr[Puzzle::VALUES]; //string array
    int sum = 0;
    if(file.is_open()){
        while(getline(file,line)){
            for(int i=0; i<Puzzle::VALUES; i++){
                getline(file, gridStr[i]);
            }
            Puzzle *current = new Puzzle(gridStr);
            cout << grid << "\n";
            Puzzle *solution = current->solve();
            if(solution != NULL){
                cout << solution;
            }
            else {
                cout << "Solution found :)\n";
            }
            sum += solution->digitCode();
        }
        cout << "Sudoku sum = " << sum << endl;
        file.close();
    }
    else {
        cout << "derp";
    }
    
    
    //read in the file line by line
    //store each line into a 1d array
    
    
    //solve the puzzle
    //if theres a solution show me
    //if there is not a solution tell me
    //get the sum
    
    return 0;
}