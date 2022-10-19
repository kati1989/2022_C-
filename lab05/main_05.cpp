#include <iostream>
#include "Matrix.h"

int main() {
   Matrix m1(2,3);
   m1.fillMatrix(10);
  m1.printMatrix();
  cout<<"Random  szamokkal feltoltve a  matrix"<<endl;
  m1.randomMatrix(2,15);
  //

    return 0;
}