//
//  main.cpp
//  Sudoku
//
//  Created by Katelynn on 4/10/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    //read file in to pass to puzzle constructor
    
    string line;
    ifstream file("/Users/Katelynn/xCode projects/Sudoku/Sudoku/grid1.txt");
    if(file.is_open()){
        while(getline(file,line)){
            cout << line << "\n";
        }
        file.close();
    }
    else {
        cout << "derp";
    }
    
    //solve the puzzle
    //if theres a solution show me
    //if there is not a solution tell me
    //get the sum
    
    for(int i=0; i < 81; i++){
        cout << i << ", ";
    }
    
    return 0;
}