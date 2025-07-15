//
// Created by STHEP on 7/15/2025.
//
#pragma once
#ifndef MATRIXPARTITION_H
#define MATRIXPARTITION_H
#include <iostream>
#include <span>
#include <vector>

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

    std::span<int> getNthRowPartition(int n)  {
        int left = n*this->column;
        std::span<int>::size_type right = (left + this->column) - 1;
        return  {this->matrix+left,this->matrix+right};
    }

    std::vector<std::reference_wrapper<int>> getNthColumnPartition(int n)  {
        std::vector<std::reference_wrapper<int>> Column;
        const auto total_internal_iteration = this->row*this->column;
        for (int column_head = 0; column_head < this->column; column_head++) {
            for (int column_item = column_head;column_item < total_internal_iteration; column_item+=this->row) {
                Column.emplace_back(this->matrix[column_item]);
            }
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
