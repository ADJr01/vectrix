#include <iostream>

int multiply_two_by_two_matrix(int A[4],int B[4]);

int main() {
    int A[] = {
        4, 2,
        9, -3
    };
    int B[] = {
        1, -5,
        2, -2
    };

    multiply_two_by_two_matrix(A, B);

}

int multiply_two_by_two_matrix(int A[4],int B[4]) {
    int result_matrix[4];
    for (int i = 0; i < 4; i++) {
        result_matrix[i] = 0;
    }
    const int total_row = 2;
    for (int row = 0; row < total_row; row++) {
        auto const Aitem = A[total_row*row];
        for (int j = 0; j < total_row; j++) {
            const auto Bitem = B[ j];
            printf("(%d*%d) ",Aitem,Bitem);
        }
        printf("\t");
    }
    for (int row = 0; row < total_row; row++) {
        auto const Aitem = A[total_row*row+1];
        for (int j = 0; j < total_row; j++) {
            const auto Bitem = B[ j+total_row];
            printf("(%d*%d) ",Aitem,Bitem);
        }
        printf("\t");
    }


    return  1;
}