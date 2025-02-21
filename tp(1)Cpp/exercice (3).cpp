#include <iostream>
using namespace std;
int main()
{
 
	 int tab[] = {2,7,8,0,3,4,9,1};
	 int index = 0;
	 int nb = 8;
	 
	 for(int i=0; i <nb; i++) {
		 if(tab[i] % 2 == 0 ) {
		 int temp = tab[i];
		 tab[i] = tab[index];
		 tab[index] = temp;
		 index++;
	 }
	
 }
	 for (int i = 0; i < nb; i++) {
        cout << tab[i] << endl;
    }
        return 0;
}

