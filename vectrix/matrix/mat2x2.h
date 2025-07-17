//
// Created by adnan on 7/11/25.
//

#ifndef MAT2X2_H
#define MAT2X2_H
#include <bits/unique_ptr.h>

#include "MatrixPartition.h"


template<typename T>
requires std::is_arithmetic_v<T>
class mat2x2 {
private:
  MatrixPartition<T> matrix_partition;
  int rows;
  int cols;
  public:
  mat2x2(T matrix[]) {
    if (std::size(matrix)!=4) throw std::invalid_argument("Mat2x2 can only hold array of exactly 4");
    this->rows = 2;
    this->cols = 2;
    this->matrix_partition = MatrixPartition<T>(matrix);
  };


  mat2x2 operator*(mat2x2<T>& other) {
      for (int i = 0; i < 2; i++) {
          auto rows_from_this = this->matrix_partition.getNthRowPartition(i);
          for (int j = 0; j < 2; j++) {

          }
      }
  }





};



#endif //MAT2X2_H
