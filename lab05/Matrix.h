//
// Created by Kati on 10/19/2022.
//

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>

using namespace std;

class Matrix {
public:
// Default constructor

    Matrix( int mRows = 10, int mCols =10);
    //fills the matrix with identical elements
void fillMatrix(double value);
//fills the matrix with random real numbers in the range [a, b)
//    void randomMatrix(int a, int b); //fills
//prints the matrix
    void printMatrix(ostream& os = cout) const;
    friend ostream & operator<<(ostream& os, const Matrix& mat);
    //fills the matrix with random real numbers in the range [a, b)
    void randomMatrix(int a, int b); //fills


private:
//Data
    double **mElements;
    int mRows; //number of rows
    int mCols; //number of columns
};


#endif /* MATRIX_H */
