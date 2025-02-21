

#include <iostream>

int main()
{
  int unique = 0;
    int tab[] = {2, 3, 1, 3, 2};
    
    for (int i : tab) {
        unique ^= i;
    }
    
    std::cout << unique << std::endl;
    return 0;
}