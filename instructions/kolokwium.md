# Kolokwium 1
## Zmienne
### Typy zmiennych
Należy znać typy zmiennych w języku C, orientacyjnie wiedzieć ile miejsca w pamięci zajmują oraz jakie minimalne i maksymalne wartości mogą przechowywać.

Jakie wartości może przechowywać zmienna jeśli użyjemy słówka `unsigned` a jakie `signed`?

Maksymalne wartości jakie może przechowywać zmienna są zdefiniowane w bibliotece [<limits.h>](https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170). <mark>Limity mogą się różnić w zależności od użytego kompilatora czy typu systemu.</mark>

Aby sprawdzić ile zajmuje zmienna lub dany typ można skorzystać z funkcji `sizeof()`. <mark>Wielkości mogą się różnić w zależności od użytego kompilatora czy typu systemu.</mark>

<details>
<summary></summary>

```c
#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Ilosc bitow w bajcie: %i\n",CHAR_BIT);
    double a = 10.543;
    printf("Ilosc bajtow jaka zajmuje zmienna a = %d\n", sizeof(a));

    printf("Ilosc bajtow jakie zajmuje typ char = %d", sizeof(char));
    return 0;
}
```

```bash
Ilosc bitow w bajcie: 8
Ilosc bajtow jaka zajmuje zmienna a = 8
Ilosc bajtow jakie zajmuje typ char = 1
```

</details>

Co stanie się gdy przekroczymy zakres danej zmiennej? (do zmiennej signed char a = 127 dodamy 1)

### Deklaracja zmiennych

## operatory

## instruckje warunkowe

## pętle

## funkcje

## wskaźniki

## struktury