#include <iostream>
using namespace std;

int main()
{
        int tab[4][3] = {
        {2, 3, 0},  
        {1, 5, 4},  
        {2, 5, 0},  
        {7, 5, 1}   
    };
 int n = 4; 
    int index = 0;
    int sommeMax = 0;

    for (int i = 0; i < n; i++) {
        int somme = 0;
        for (int j = 0; j < 3; j++) {
            somme += tab[i][j];
        }
        if (somme > sommeMax) {
            sommeMax = somme;
            index = i;
        }
    }

    // Affichage du résultat
    cout << "La ligne avec la plus grande somme est la ligne "
         << (index + 1) << " avec une somme de " << sommeMax  << endl;

        return 0;
}

