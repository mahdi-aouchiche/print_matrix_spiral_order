#ifndef __SPIRAL_MATRIX_HPP__
#define __SPIRAL_MATRIX_HPP__

#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print_matrix_clockwise(vector<vector<string>> );
void print_row(vector<vector<string>>, int, int, int);
void print_col(vector<vector<string>>, int, int, int);
vector<vector<string>> get_sub_matrix (vector<vector<string>> );

#endif // __SPIRAL_MATRIX_HPP__