#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *in = fopen("files/file1.txt", "r");    // otwiera plik do odczytu (musi istniec)
    if (in == NULL)
    {
        perror("Nie udalo sie otworzyc pliku.");
        return 1;
    }

    int x;
    int charNumber = fscanf(in, "%i", &x);
    printf("%i   %i",x, charNumber);
    
    
    charNumber = fscanf(in, "%i", &x);
    printf("%i   %i",x, charNumber);

    fclose(in);
    return 0;
}
