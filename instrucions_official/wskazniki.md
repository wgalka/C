# Wskaźniki

**Wskaźnik - jest to zmienna przechowująca adres.**

```c
typ *nazwa_zmienej; //ogólna postać definicji zmiennej wskaźnikowej
```

**wskaźnik generyczny**

```c
void *voidPointer; // wskaźnik generyczny (ang. Generic pointer)
```

**wskaźniki do określonego typu**

```c
int *integerPointer; // wskaźnik na adres przechowujący liczbę całkowitą
int *integerPointer2; // inny wskaźnik na adres prechowujący liczbę całkowitą
float *floatPointer; // wskaźnik na adres przechowujący liczbę zmiennoprzecinkową

double* doublePointer; // spacja nie ma wpływu na wykonanie kodu. Jednak dobrą praktyką jest stawianie * przy nazwie zmiennej jak w przykładach wyżej

char*               charPointer; // ten kod też wykona się poprawnie.
```


```c
int *integerPointer = 0x00000; // UWAGA ADRES jest chroniony przez system stąd przy próbie odczytu wartości pod tym adresem kod przestaje działać.
*integerPointer = 3;


```
