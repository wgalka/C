# PPWJC
Rzutowanie, spójniki logiczne  i struktury

## Pytania

## Przykłady
### Operatory logiczne
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 1;
    // Jeśli a i b (iloczyn logiczny) - muszą zostać spełnione dwie reguły.
    // Warunek będzie spełniony tylko jeśli a i b będzie miało wartość true - 1.
    if (a && b)
    {
        printf("Wykonano a && b = %i\n", a&&b);
    }
    else
    {
        printf("Warunek a && b nie zostal spelniony = %i\n", a&&b);
    }

    // Jeśli a lub b (suma logiczna) - jeden z warunków musi mieć wartość true - 1.
    // Warunek będzie spełniony jeśli a lub b będzie true.
    if (a || b)
    {
        printf("Wykonano a || b = %i\n", a||b);
    }
    else
    {
        printf("Warunek a || b nie zostal spelniony = %i\n", a&&b);
    }

    return 0;
}
```
### 

## Zadania
### Zadanie 1 `task1.exe`
Wygeneruj wszystkie kombinacje z powtórzeniami liczb 0 i 1. Wypisz tablicę prawdy wykorzystując operatory logiczne:
```terminal
|a  |b  |And(&) |OR(|)  |
|---|---|-------|-------|
|0  |0  |0      |0      |
|0  |1  |0      |1      |
|1  |0  |0      |1      |
|1  |1  |1      |1      |
```
### Zadanie 2 `task2.exe`
Utwórz kalkulator BMI w którym użytkownik podaje swoją wagę oraz wzrost a następnie wypisana zostaje informacja według następujących przedziałów:
![](https://www.zikodlazdrowia.org/wp-content/uploads/2020/06/bmi-scale_ziko_dla_zdrowia.png)

$$
BMI = \frac{kg}{m^2}
$$
kg - masa ciała w kilogramach
m - wzrost w metrach

### Zadanie 3 `Task3.exe`

