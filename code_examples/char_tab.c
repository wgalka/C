#include <stdio.h>
#include <stdlib.h>
int main(){

    char example1[] = "Ala"; // Utworzenie tablicy o rozmiarze 4 - 4 miejsce zawiera znak pusty '\0'.

    printf("Example1:%s\n", example1); // Dzięki znakowi pustemu funkcja printf wie kiedy zakończyć wypisywanie łańcucha w konsoli.

    char example2[3] = "Ala"; // Tablica bez znaku pustego na końcu.

    printf("Example2:%s\n", example2); // Próbując wypisać tablice która nie zawiera znaku pustego na końcu.
    // kompilator będzie oczytywał bity w pamięci aż natrafi na ciąg reprezentujący znak pusty '\0'

    printf("Wskaźnik na pierwszy element tablicy example2:%p\n", example2);
    printf("Wskaźnik na pierwszy element tablicy example1:%p\n", example1);

    for(char *ptr=example2; *ptr != '\0'; ptr++){
        printf("%c", *ptr);
    }

    return EXIT_SUCCESS;
}