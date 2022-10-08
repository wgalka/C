# PPWJC 
Lab 2

## Pytania
- Jak działa dyrektywa `#define`?
- Czym jest zmienna? Jak deklarujemy zmienne?
- Typy zmiennych w C
- Czego potrzebuje program by działać?
- Czym jest literał?**
- instrukcja
- Budowa funkcji.
- Operatory:
    - przypisania
    - artymetyczne
    - porównania
    - logiczne**
    - dostępu**

## Zadania
Utwórz folder Lab2 na pulpicie, następnie otwórz folder w Visual Studio Code.
### Zadanie 1 - I/O i zmienne
Interakcja z programem - [`printf()`](https://documentation.help/C-Cpp-Reference/printf.html) [`scanf()`](https://documentation.help/C-Cpp-Reference/scanf.html)\
Korzystając z dokumentacji funkcji [printf](https://documentation.help/C-Cpp-Reference/printf.html) utwórz program task1.exe który przechowuje w następujących zmiennych:
- `name` - imię
- `surname` - nazwisko
- `age` - wiek
- `albumNumber` - numer albumu
- `PI_VALUE` - wartość liczby pi(stała wartość - constant)

 a następnie wypisuje w standardowym wyjściu te informacje.


Przypisz zmiennym nowe wartości będące danymi kolegów po twojej lewej i prawej stronie i wypisz te wartości. (Program powinien wypisywać informacje o 3 osobach)

### Zadanie 2 - Operatory
Utwórz plik operators.c a następnie wykonaj poniższe polecenia.\
**Operatory arytmrtyczne:**

|Symbol | Działanie                       |
|-------|---------------------------------|
| +     |  .                               |
| -     |  .                               |
| *     |  .                               |
| /     |  .                               |
| %     |  .                               |

Utwórz zmienną `a = 16` oraz `b = 5`. Przetestuj działanie kolejnych operatorów w następujący sposób (przykład dla +):

```c
int a = 16;
int b = 5;
int result1 = a + b;
prinft("Wynik działania 16 + 5 = %i",result1);
```

W jaki inny sposób można zapisać następujący kod?
```c
float a = 10;
float b = 4;
a = a / b;
printf("%i", a);
```

**Operator przypisania**

|Symbol  | Działanie                       |
|--------|---------------------------------|
| =      | .                                |
| +=     | .                                |
| -=     | .                                |
| *=     | .                                |
| /=     | .                                |
| %=     | .                                |

Przetestuj działanie operatorów, napisz jak działają w komentarzu. Poniżej przykład użycia operatorów `=` oraz `+=`.

```c
int a = 16;
int b = 5;
int result1 = a;
printf("result1 = %i",result1);
result1 += b;
printf("result1 += b = %i",result1);
```

**Operatory porównania**

|Symbol  | Działanie                       |
|--------|---------------------------------|
| ==     | .                                |
| !=     | .                                | 
| <      | .                                |
| >      |  .                               |
| <=     | .                                |
| >=     | .                                |

```c
int a = 16;
float b = 16;
bool result = a == b;
printf("a == b - %i",a==b)
```

Przetestuj działanie powyższych operatorów. Wyniki wypisz w standardowym wyjściu.

### Zadanie 3 - I/O
Zapoznaj się z dokumentacją funkcji [scanf()](https://documentation.help/C-Cpp-Reference/scanf.html) a następnie utwórz program który zapyta użytkownika o wartość liczy a, następnie wartość liczby b po czym wypisze sumę tych dwóch liczb.

### Zadanie 4 - Instrukcje warunkowe
Zapoznaj się z dokumentacją instrukcji
[if](https://learn.microsoft.com/pl-pl/cpp/c-language/if-statement-c?view=msvc-170) oraz 
[switch](https://learn.microsoft.com/pl-pl/cpp/c-language/switch-statement-c?view=msvc-170).

```c
if (/* condition */)
{
    /* code */
}
```

```c
if (/* condition */)
{
    /* code */
}else
{
    /* code */
}
```

```c
if (/* condition */)
{
    /* code */
}else if (/* condition */)
{
    /* code */
}else if (/* condition */)
{
    /* code */
}else if (/* condition */)
{
    /* code */
}else
{
    /* code */
}
```


Napisz program który prosi użytkownika o wpisanie liczby a nastepnie sprawdza czy podana liczba jest podzielna przez 2 i wypisuje odpowiednią informacje.

Napisz program który prosi użytkownika o dwie wartości liczbowe oraz jedną znakową + - * lub /. Używając instrukcji switch wykonaj obliczenia w zależności od wyboru użytkownika.

### Zadanie 5
utwórz plik arguments.c a w nim umieść poniższy kod:

```c
int main(int argc, char const *argv[])
{
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n",argv[0]);
    printf("argv[1] = %s\n",argv[1]);
    printf("argv[1] = %s\n",argv[2]);
    return 0;
}
```

Skompiluj kod do pliku uruchomieniowego `arguments.exe`. Uruchom kod poleceniem `arguments.exe 12 cześć "hello world"`

Przetestuj działanie kodu uruchamiając program z róznymi argumentami np. `arguments.exe 1 2 3 4`(W jaki sposób odczytać wartość "4" z tego polecenia?), w komentarzu napisz co przechowuje zmienna argc oraz argv. 

### Zadanie 6
Napisz program delta.exe przyjmujący parametry a b c który wypisze w standardowym wyjściu wartość delty. $$ \Delta = b^2 - 4ac $$

## Po zakończonej pracy:
1. Zapisz swoje rezultaty
2. Usuń utworzone pliki z pulpitu



https://learn.microsoft.com/pl-pl/cpp/preprocessor/hash-include-directive-c-cpp?view=msvc-170

https://www.geeksforgeeks.org/data-types-in-c/#:~:text=Different%20data%20types%20also%20have%20different%20ranges%20up%20to%20which%20they%20can%20store%20numbers.%20These%20ranges%20may%20vary%20from%20compiler%20to%20compiler.%20Below%20is%20a%20list%20of%20ranges%20along%20with%20the%20memory%20requirement%20and%20format%20specifiers%20on%20the%2032%2Dbit%20GCC%20compiler.

https://learn.microsoft.com/en-us/cpp/c-language/c-operators?view=msvc-170

https://en.wikipedia.org/wiki/C_data_types#Boolean_type