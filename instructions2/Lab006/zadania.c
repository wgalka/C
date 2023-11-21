#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    MALE,
    FEMALE
} Poziom;

typedef union
{
    int INT;
    float FLOAT;
    char CHAR;
} var_type;

typedef struct
{
    int INT;
    float FLOAT;
    char CHAR;
    char CHAR1;
    char CHAR2;
    char CHAR3;
    var_type type;
} test;

void function(test *ab)
{
    printf("funkcja|%p|\n", ab);
    ab->INT = 4321;
}

void func(int a)
{
    printf("func|%p|\n", &a);
    a += 5;

    a *= 6;
    a -= 5;
    printf("|%i|\n", a);
};

typedef struct
{
    char imie[20];
    int wiek;
} student;

void memcpy2(char *stringa, char *stringb)
{
    for (char *i = stringb; *i; i++)
    {
        // printf("%p", );
        *stringa = *i;
        stringa++;
    }
}

int main()
{

    student studenci[3];
    studenci[0].wiek = 20;
    memcpy2(studenci[0].imie, "ADAM");

    printf("wiek|%i|\n", studenci[0].wiek);
    printf("imie|%s|\n", studenci[0].imie);

    system("PAUSE");
    return EXIT_SUCCESS;
}