#include <iostream>
using namespace std;

int main() {
    const int n = 10; 
    int tab[n] = {-2, -1, 2, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = tab[0], currentMax = tab[0];

    for (int i = 1; i < n; i++) {
        currentMax = max(tab[i], currentMax + tab[i]);
        maxSum = max(maxSum, currentMax);
    }

    cout << "La somme du sous-tableau maximal est : " << maxSum << endl;
    return 0;
}
