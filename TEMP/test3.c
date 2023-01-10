#include <stdio.h>

#include <stdlib.h>

// zadanie 1.

typedef enum

{
    INT,
    FLOAT,
    CHAR
} var_type;

// zadanie 2.

typedef union
{
    int i;
    float f;
    char c;
} wartosc;

typedef struct
{
    var_type typ;
    wartosc war;
} var;

void setInt(var* liczba, int value)
{
    liczba->typ = INT;
    liczba->war.i = value;
}

int main(int argc, char const *argv[])
{
    var liczba;
    setInt(liczba, 67);
    printf("%i", liczba.war.i);
    return 0;
}
