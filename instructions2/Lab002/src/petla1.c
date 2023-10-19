#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; // inicjalizacja zmiennej
    for (i = 1; i < 6; i++)
    // przed wykonaniem kodu sprawdzany jest warunek końcowy - czy zmienna i jest mniejsza od 6.
    {
        printf("%i", i); // wypisanie wartości zmiennej i.
        // Po wypisaniu wykonuje się aktualizacja. W tym przypadku zwiększenie wartości i o 1 co zapisano i++
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}