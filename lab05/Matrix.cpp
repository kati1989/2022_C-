//
// Created by Kati on 10/19/2022.
//

#include <random>
#include "Matrix.h"
//ami zarojelben van az a konstruktor parametere

Matrix::Matrix(int mRows , int mCols ) : mRows(mRows), mCols(mCols){
        mElements = new double *[mRows];
        for (int i=0;i<mRows;++i){
            mElements[i] = new double[mCols];
        }

}

void Matrix::fillMatrix(double value) {
    for(int i=0;i<mRows;i++){
        for(int j=0;j<mCols;j++){
            this->mElements[i][j]=value;
        }
    }
}



ostream & operator<<(ostream& os, const Matrix& mat){
    os << mat.mRows << ' ' << mat.mCols << '\n';
    for (int i = 0; i < mat.mRows; ++i)    {
        for (int j = 0; j < mat.mCols; ++j)
            os << mat.mElements[i][j] << "  ";
        os << endl;
    }
    return os;
}

void Matrix::printMatrix(ostream &os) const {
    for(int i=0;i<mRows;i++){
        for(int j=0;j<mCols;j++){
            os<<mElements[i][j]<<" ";
        }
        os<<endl;
    }

}

void Matrix::randomMatrix(int a, int b) {
random_device rd;
mt19937  gen(rd());
uniform_real_distribution<>dis(a,b);
for(int i=0;i<mRows;++i){
    for(int j=0;j<mCols;j++){
        cout<<dis(gen)<<' ';
    }
    cout<<endl;

}
cout <<"\n";

}


