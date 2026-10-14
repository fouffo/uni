#include <iostream>
#include <iomanip>

const int WIDTH = 5;
const int HEIGHT = 4;

void getMatrix(int mat[][WIDTH], int w, int h){
    for(int i = 0; i < h; i++){
        std::cout << "Write the " << WIDTH << " elements of row " << i << ", separated by spaces." << std::endl;
        for (int j = 0; j < w; j++){
            std::cin >> mat[i][j];
        }
    }
}

void printMatrix(int mat[][WIDTH], int w, int h){
    for(int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            std::cout << std::setw(5) << mat[i][j];
        }
        std::cout << std::endl;
    }
}

int main(){
    int mat[HEIGHT][WIDTH];

    getMatrix(mat, WIDTH, HEIGHT);

    printMatrix(mat, WIDTH, HEIGHT);
}

// What happens if the user enters 7 values in a row?
//  The extra two are just inserted in the following row.
// Can you fix the input so that these kind of problems don’t happen?
//  It would just mean clearing the buffer before reading each row.
// Use setw (from iomanip) to display the matrix in a nicely-formatted way
//  Aight
// Write the functions so that you can reuse them in multiple programs (in principle, they could become the part of a library
//  Bet