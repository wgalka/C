# PPWJC
lab5 - Operacje na plikach

## Pytania

## Przykłady
https://pl.wikibooks.org/wiki/C/fopen
https://pl.wikibooks.org/wiki/C/fclose

https://pl.wikibooks.org/wiki/C/fputs
https://pl.wikibooks.org/wiki/C/perror
https://pl.wikibooks.org/wiki/C/puts

https://pl.wikibooks.org/wiki/C/scanf


### Otwarcie pliku i odczytanie różnych typów danych różnymi metodami
zawartość pliku file1.txt
`321 Programowanie 3.14 4.52`
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *in = fopen("files/file1.txt", "r");    // otwiera plik do odczytu (musi istniec)
    if (in == NULL)
    {
        perror("Nie udalo sie otworzyc pliku.");
        return 1;
    }

    // fscanf()
    int x1;
    char x2[30];
    float x3;
    double x4;
    int charNumber = fscanf(in, "%i %s %f %lf", &x1, x2, &x3, &x4);
    printf("%i %s %f %f \n", x1, x2, x3, x4);
    fclose(in);
    
    
    // fgets()
    in = fopen("files/file1.txt", "r");
    char readedText[101];
    char restult[100];
    fgets(readedText , 30 , in );
    printf("%s\n", readedText);
    fclose(in);

    // fgetc()
    in = fopen("files/file1.txt", "r");
    char readedChars[40];
    for(int i=0;i<40;i++){ 
        readedChars[i] = fgetc(in);
    }
    printf("%s", readedChars);
    fclose(in);

    return 0;
}

```
### Zapis do pliku tekstowego
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *out = fopen("files/file2.txt", "w");

    // fprintf()
    int x1 = 321;
    float x2 = 3.21;
    double x3 = 42.32;
    char x4 = 'f';
    char x5[] = "abcd";
    fprintf(out, "%d\n", x1);
    fprintf(out, "%f\n", x2);
    fprintf(out, "%lf\n", x3);
    fprintf(out, "%c\n", x4);
    fprintf(out, "%s\n", x5);

    // fputs()
    char y1[] = "efgh";
    fputs(y1, out);
    fputs("\nijklm",out);

    fclose(out);
    /* code */
    return 0;
}
```

## Zadania
