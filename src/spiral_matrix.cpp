#include "../header/spiral_matrix.hpp"

void print_matrix_clockwise(vector<vector<string>> mat) {
    int n = mat.size();

    // base case 0: empty matrix
    if(n == 0) {
        return;
    }

    // base case 1: matrix 1 x 1 
    if(n == 1) {
        print_row(mat,0,0,0);
        return;
    }

    // base case 2: matrix 2 x 2 
    if(n == 2) {
        print_row(mat, 0, 0, 1);
        print_row(mat, 1, 1, 0);
        return;
    }

    // output outer rows and columns for matrices with size greater than 2 x 2 
    print_row(mat, 0, 0, n-1); 
    print_col(mat, n-1, 1, n-1);
    print_row(mat, n-1, n-2, 0);
    print_col(mat, 0, n-2, 1);

    // get the interior sub-matrix
    vector<vector<string>> sub_mat = get_sub_matrix(mat);

    // Recursive cases
    print_matrix_clockwise(sub_mat);    
}

void print_row(vector<vector<string>> mat, int row, int start, int end) {
    if(start <= end) {
        for(int i = start; i <= end; i++) {
            cout << mat[row][i] << " ";
        }
    } else {
        for(int i = start; i >= end; i--) {
            cout << mat[row][i] << " ";
        }
    }
}

void print_col(vector<vector<string>> mat, int col, int start, int end) {
    if(start <= end) {
        for(int i = start; i <= end; i++) {
            cout << mat[i][col] << " ";
        }
    } else {
        for(int i = start; i >= end; i--) {
            cout << mat[i][col] << " ";
        }
    }
}

vector<vector<string>> get_sub_matrix (vector<vector<string>> mat) {
    int mat_size = mat.size();

    vector<vector<string>> sub_mat(mat_size - 2, vector<string> (mat_size - 2, ""));
    for(int i = 1; i < mat_size - 1; i++) {
        for(int j = 1; j < mat_size - 1; j++) {
            sub_mat[i-1][j-1] = mat[i][j];
        }
    } 

    return sub_mat;
}
