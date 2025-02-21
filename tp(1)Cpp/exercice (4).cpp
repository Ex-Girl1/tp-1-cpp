#include <iostream>
using namespace std;
int main()
{
 
  int tab[][4] = {
        {2, 1, 0, 0},  
        {7, 4, 9, 0},
        {5, 2, 6, 3}
    };
int lg = 3;
       
        for (int i = 0; i < lg; i++) {
            int somme = 0;
            for (int j = 0; j < 4; j++) {
                somme += tab[i][j];
            }
           cout << "Somme de la ligne " << (i + 1) << " : " << somme << endl;
        }
        return 0;
}

