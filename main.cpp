#include <iostream>

#include "vectrix/matrix/MatrixPartition.h"

void fetch_row_column_from_two_matrix(const int* mat_a,const int* mat_b,int total_row_a,int total_row_b,int row_size_a,int row_size_b,const int total_column_b,int column_size_b);

int main() {
    int A[] = {
        4, 2, 7,8,4,6,9,-3,1,0,
        9, -3,9,0,0,1,2,3,3,3
    };
    int B[] = {
        33, 19, 66,
        2, -2, -7,
        1, 0, 3
    };
    MatrixPartition mp(2,10,A);
    auto arr = mp.getNthColumnPartition(1).data();
    for (int i =0;i<2;i++) {
        std::cout <<arr[i] << " ";
    }

    return 0;

}

//* means ok state
//? means chaos state
void fetch_row_column_from_two_matrix(const int* mat_a,const int* mat_b,int total_row_a,int total_row_b,int row_size_a,int row_size_b,const int total_column_b,int column_size_b) {
   // if (row_size_a != column_size_b) throw std::invalid_argument("AxB Matrix multiplication is not possible. in equal row_size_a & column_size_b");
    //*  row fetching
    for (int row = 0; row < total_row_a; row++) { // * we know the total number of row in matrix A
        const auto current_row = (row*row_size_a);
            for (int items_from_row = 0;items_from_row<row_size_a;items_from_row++) { // * we know the length of each row from matrix A
                const auto row_index_digit = mat_a[current_row+items_from_row];
                printf("(%d) ",row_index_digit);
            }
        printf("==row\n");
    }

    printf("\n");
    // * column fetching
    const int total_internal_iteration = row_size_b * column_size_b ;
    for (int column_head = 0; column_head < row_size_b; column_head++) {
        for (int column_item = column_head;column_item < total_internal_iteration; column_item+=row_size_b) {
            printf("%d ",mat_b[column_item]);
        }
        printf("==column\n");
    }
}

