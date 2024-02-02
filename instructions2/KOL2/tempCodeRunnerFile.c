#include <stdio.h>
#include <string.h>

int main()
{
    // Zakładamy że to linia oczytana z pliku CSV
    char line[] = "kolumna A, Kolumna B, Kolumna C";

    // bufor na odczytane znaki
    char buffer[100];
    // licznik dla tablicy buffer. Po napotkaniu ',' będzie zerowany.
    int buffer_counter = 0;
    // teraz będziemy iterować po wszystkich znakach ze zmiennej line
    // pętla zakończy działąnie gdy dojdziemy do znaku '\0'
    for (char *i = line; *i != '\0'; i++)
    {
        // TODO Sprawdzenie, czy bieżący znak to przecinek
        if (*i == ',')
        {
            // Zakończenie łańcucha znaków znakiem '\0' (buffer[buffer_counter])
            buffer[buffer_counter] = '\0';

            // wypisz zawartość buforu
            printf("%s\n", buffer);

            // wyzeruj buffer_counter
            buffer_counter = 0;
            // przejdź do następnej iteracji
            continue;
        }

        // przypisz wartość *i do buffer[buffer_couter]
        buffer[buffer_counter] = *i;
        // zwiększ buffer_counter o 1
        buffer_counter += 1;
    }
    // Zakończenie buforu znakiem '\0'
    buffer[buffer_counter] = '\0';
    // wypisanie ostatniego łańcucha znaków
    printf("%s", buffer);

    return 0;
}