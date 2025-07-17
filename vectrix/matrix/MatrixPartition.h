//
// Created by STHEP on 7/15/2025.
//
#pragma once
#ifndef MATRIXPARTITION_H
#define MATRIXPARTITION_H
#include <iostream>
#include <span>
#include <vector>
template<typename T>
requires std::is_arithmetic_v<T>
class MatrixPartition {
private:
    int row;
    int column;
    int length;
    int* matrix;
public:
    MatrixPartition(int row, int column, int mat[]){
        this->row = row;
        this->column = column;
        this->length = row*column;
        this->matrix = new int[this->length];
        for (int i = 0; i < this->length; i++) {
            this->matrix[i] = mat[i];
        }
    }

    int* getNthRowPartition(int n)  {
        int left = n*this->column;
        std::span<int>::size_type right = (left + this->column) - 1;
        return  std::span(this->matrix+left,this->matrix+right).data();
    }

    std::vector<std::reference_wrapper<int>> getNthColumnPartition(int n) const {
        std::vector<std::reference_wrapper<int>> Column;
        const auto total_internal_iteration = this->row;
        int i=0;
        int column_item = n;
        while (i<this->row) {
            Column.emplace_back(this->matrix[column_item]);
            column_item+=this->column;
            i++;
        }

        return Column;
    }
    void logMatrix(){
        for (int i=0;i<this->length;i++) {
            std::cout << this->matrix[i] << " ";
        }
    }

    ~MatrixPartition() {
        delete[] this->matrix;
    }
};



#endif //MATRIXPARTITION_H
