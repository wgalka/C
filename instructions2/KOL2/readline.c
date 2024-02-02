#include <stdio.h>
#include <string.h>

// Funkcja wypisuje znaki z łańcucha znaków
void custom_print(char *string, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("|%c|", string[i]);
    }
    printf("\n");
}

int main()
{
    // Zakładamy że to linia oczytana z pliku CSV
    char line[] = "kolumna A, Kolumna B, Kolumna C";

    // Wypisuje wszystkie znaki z tablicy line
    printf("line przed wywolaniem funkcji strtok\n");
    custom_print(line, 32);
    // definicja łańcucha znaków który będzie zamieniany na '\0'
    const char separator[] = ",";
    // Zmienna token będzie przechowywać wskaźnik na ostatnio znaleziony znak '\0'
    char *token = strtok(line, separator);
    printf("line po wywolaniu funkcji strtok\n");
    custom_print(line, 32);
    printf("token wskazuje na poczatek tablicy line: %p %p\n", token, line);

    while (token != NULL) // dopóki wskaźnik nie jest pusty
    {
        printf("Token: %s\n", token);

        // w tym wywołaniu funkcji strtok token będzie przechowywał wskaźnik na '\0' które było poprzednio podmienione za ','.
        // Zostanie też podmieniony kolejny znak ',' na '\0' co można zaobserować przez wywołanie cystom_print(line, 32);
        token = strtok(NULL, separator);
        // custom_print(line, 32);
        printf("token wskazuje na %p line wskazuje na %p\n", token, line);
    }

    return 0;
}