#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j;
    scanf("%d", &i);
    scanf("%d", &j);

    int tab[i][j]; // VLA - Variable Length Arrays Dostępne od C99. Wcześniej utworzenie tablicy w ten sposób nie było możliwe.

    return EXIT_SUCCESS;
}