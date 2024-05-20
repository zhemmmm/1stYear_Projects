#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    

    const int rows = 3;
    const int cols = 3;

        int matrix[rows][cols];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100; 
        }
    }

    cout << "Original 3x3 Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int* secondrow = &matrix[1][0];

    cout << "\nElements of the second row using *secondrow pointer:" << endl;
    for (int i = 0; i < cols; ++i) {
        cout << *secondrow << " ";
        ++secondrow;
    }
    cout << endl;

    secondrow = &matrix[1][0]; 
    for (int i = 0; i < cols; ++i) {
        *secondrow += 5;
        ++secondrow;
    }

    cout << "\nModified 3x3 Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
