#include "spiral_matrix.cpp"

int main() {

    vector<vector<string>> matrix_0;
    vector<vector<string>> matrix_1 = {{"1"}};
    vector<vector<string>> matrix_2 = {{"1", "2"}, {"4", "3"}};
    vector<vector<string>> matrix_3 = {{"1", "2", "3"}, {"8", "9", "4"}, {"7", "6", "5"}};
    vector<vector<string>> matrix_4 = {{"I", "L", "o", "v"}, {"a", "r", "l", "e"}, {"e", "!", "y", "E"}, {"D", "c", "i", "p"}};
    vector<vector<string>> matrix_5 = {{"1", "2", "3", "4", "5"}, {"16", "17", "18", "19", "6"}, {"15", "24", "25", "20", "7"}, 
                                       {"14", "23", "22", "21", "8"}, {"13", "12", "11", "10", "9"}};
    vector<vector<string>> matrix_6 = {{"1", "2", "3", "4", "5", "6"}, {"20", "21", "22", "23", "24", "7"}, {"19", "32", "33", "34", "25", "8"},
                                       {"18", "31", "36", "35", "26", "9"}, {"17", "30", "29", "28", "27", "10"}, {"16", "15", "14", "13", "12", "11"}};

    vector<vector<vector<string>>> matrices;
    matrices.push_back(matrix_0);
    matrices.push_back(matrix_1);
    matrices.push_back(matrix_2);
    matrices.push_back(matrix_3);
    matrices.push_back(matrix_4);
    matrices.push_back(matrix_5);
    matrices.push_back(matrix_6);

    int size = 0;
    for(int i = 0; i < matrices.size(); i++) {
        size = matrices.at(i).size();
        cout << size << " x " << size << " matrix " << i << ":";
        print_matrix_clockwise(matrices[i]);
        cout << endl;
    }

    return 0;
}

/*  
    matrix_0:
*/

/*  
    matrix_1: 1

    1
*/

/*  
    matrix_2: 1 - 4

    1 2
    4 3
*/

/*  
    matrix_3: 1 - 9

    1  2  3
    8  9  4
    7  6  5 
*/

/*  
    matrix_4: I Love Epic Dearly!
    
    I   L   o   v
    a   r   l   e
    e   !   y   E
    D   c   i   p
*/

/*  
    matrix_5: 1 - 25

    1   2   3   4   5
    16  17  18  19  6
    15  24  25  20  7
    14  23  22  21  8
    13  12  11  10  9   
*/

/*    
    matrix_6: 1 - 36 

    1   2   3   4   5   6
    20  21  22  23  24  7
    19  32  33  34  25  8
    18  31  36  35  26  9
    17  30  29  28  27  10
    16  15  14  13  12  11
*/