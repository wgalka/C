#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef enum type
{
    INT,
    FLOAT,
    CHAR
} type;

typedef struct
{
    type type;
    union value
    {
        int _int;
        float _flaot;
        char _char;
    } value;

} var;

bool setInt(var *ptr, int a)
{
    ptr->type = INT;
    ptr->value._int = a;
}

bool setChar(var *ptr, char a)
{
    ptr->type = CHAR;
    ptr->value._char = a;
}

int main(int argc, char const *argv[])
{
    var tab[10];
    for (size_t i = 0; i < 10; i++)
    {
        setChar(&tab[i], 65);
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("%c\n", tab[i].value._int);
    }
    

    return 0;
}
