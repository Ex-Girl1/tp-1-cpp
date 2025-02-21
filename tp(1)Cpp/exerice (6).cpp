#include <iostream>
using namespace std;

const int N = 3; 

bool estPermutation(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        int ligne[N + 1] = {0}, colonne[N + 1] = {0};

        for (int j = 0; j < N; j++) {
            int valLigne = matrix[i][j], valColonne = matrix[j][i];

            if (valLigne < 1 || valLigne > N || ligne[valLigne]++) 
            return false;
            if (valColonne < 1 || valColonne > N || colonne[valColonne]++)
            return false;
        }
    }
    return true;
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}
    };

    cout << (estPermutation(matrix) ? "C'est une permutation." : "Ce n'est pas une permutation.") << endl;
    return 0;
}

