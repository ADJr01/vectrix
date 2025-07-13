#include <iostream>

void multiply_n_x_n_matrix(const int* mat_a,const int* mat_b,int total_row_a,int total_row_b,int row_size_a,int row_size_b,const int total_column_b,int column_size_b);

int main() {
    int A[] = {
        4, 2, 7,8,4,6,9,-3,1,0,
        9, -3,9,0,0,1,2,3,3,3
    };
    int B[] = {
        1, -5,
        2, -2,
        1, 0
    };

    multiply_n_x_n_matrix(A,B,2,3,10,2,3,2);

}

//* means ok state
//? means chaos state
void multiply_n_x_n_matrix(const int* mat_a,const int* mat_b,int total_row_a,int total_row_b,int row_size_a,int row_size_b,const int total_column_b,int column_size_b) {
   // if (row_size_a != column_size_b) throw std::invalid_argument("AxB Matrix multiplication is not possible. in equal row_size_a & column_size_b");
    /**  ok
    for (int row = 0; row < total_row_a; row++) { // * we know the total number of row in matrix A
        const auto current_row = (row*row_size_a);
            for (int items_from_row = 0;items_from_row<row_size_a;items_from_row++) { // * we know the length of each row from matrix A
                const auto row_index_digit = mat_a[current_row+items_from_row];
                printf("(%d) ",row_index_digit);
            }
        printf("\n");
    }
    */
    printf("\n");
    // ? confused
    for (int column_head = 0; column_head < row_size_b; column_head++) {
        const auto current_column = column_head<1? (column_head*total_column_b):(column_head*total_column_b)+column_size_b;
        printf("index:%d==(%d) ",current_column,mat_b[current_column]);

        printf("\t");
    }
}

