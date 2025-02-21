

#include <iostream>
using namespace std;
int main()
{
  int SomCible = 7;
    int tab[] = {1, 4, 6, 2, 3,5,7};
    int nb=7;
    
    for (int i=0; i<nb ;i++) {
       for(int j=i+1; j<nb ;j++){
           if(tab[i] + tab[j] == SomCible)
            cout << "(" << tab[i] << ", " << tab[j] << ")" << endl;
       }
    }
    
    
    return 0;
}