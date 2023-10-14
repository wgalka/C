# Laboratorium 1

## Pierwszy program

Aby utworzyć nowy projekt w Visual Studio Code należy utworzyć nowy folder który będzie zawierał wszystkie pliki projektu. Można to zrobić na wiele sposobów. Jednym z nich jest stworzenie folderu na pulpicie, kliknięcie prawym przyciskiem myszy na folder i wybranie z menu kontekstowego opcji `open with code`.

![open with code image](img/open_with_code.png)

Po otwarciu ukaże się interfejs programu.
- Kolorem zielonym oznaczono drzewo projektu. U góry(po najechaniu na pasek z nazwą) dostępne są opcje utworzenia nowego folderu wewnątrz projektu a także plików. 
- Kolorem czerwonym oznaczono zakładkę umożliwiającą zainstalowanie rozszerzeń(pluginów) do programu.
- Kolorem żółtym opcję menu umożliwiającą otworzenie nowego terminala. **Tworząc nowy terminal z otwartym projektem(folderem) domyślnie będzie on otwarty w katalogu głównym projektu.** Jeśli nie jest należy za pomocą komendy `cd` (system windows) przejść do katalogu z którego pliki będziemy kompilować lub uruchamiać.

![VSCode interface](img/vs_code_interface.png)

 Zwykle pliki źródłowe zawierające kod programu w języku C mają rozszerzenie ".c". Na przykład, "main.c", "utils.c", "mylibrary.c". Przy wybieraniu nazwy dla plików:
 - **unikaj używania spacji i znaków specjalnych w nazwach plików i katalogów**, ponieważ mogą one powodować problemy w niektórych narzędziach i systemach operacyjnych.
 - **stosuj opisowe i zrozumiałe nazwy plików, które odzwierciedlają ich zawartość i przeznaczenie**. To ułatwi pracę z projektem innym programistom.

 Aby utworzyć plik ze wspomnianego wcześniej menu znajdującego się w drzewie katalogu wybierz ikonkę kartki ze znakiem "+". Następnie wpisz nazwę pliku(pamiętaj o rozszerzeniu pliku - ".c") i zatwierdź wciskając enter.
 
 ![Alt text](img/file_creation.png)

 Wyspecjalizowane pluginy ułatwiają pracę programisty. Poniżej lista przykładowych pluginów:

- Material Icon Theme zawiera ikony dla wielu języków programowania, frameworków i typów plików, co ułatwia rozpoznawanie zawartości projektu. Możesz dostosować ten plugin do swoich potrzeb, wybierając różne zestawy ikon i konfigurując ich wygląd.

 ![Alt text](image.png)

 - C/C++ Extension Pack to zestaw rozszerzeń dla środowiska Visual Studio Code (VS Code). Oferuje narzędzia takie jak IntelliSense(sugesttie kodu, dokumentacja, **sprawdzanie poprawności składni**), debugowanie(narzędzie do analizy kodu w celu wyszukiwania błędów tzw. "bugów") itp.

 ![Alt text](image-1.png)

 ### Zadanie 1

 Utworzyć nowy projekt o nazwie [nr. albumu]LAB001. W projekcie utworzyć plik `myfirstapp.c` z następującą zawartością:

 ```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, World!\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
 ```

 ## Kompilacja

 
Kompilacja w języku C to proces przekształcania kodu źródłowego napisanego w języku C na kod maszynowy lub plik wykonywalny, który może być uruchomiony na komputerze. Popularnym narzędziem do kompilacji plików w języku C jest program MinGW zawierający implementację GCC(GNU Compiler Collection - darmowy i otwarty kompilator). 

[**MinGW Download**](https://sourceforge.net/projects/mingw/)

**Konfiguracja MinGW dla systemów Windows:** 

- Zainstalować kompilator języka C. Np. Pakiet [MinGW](https://sourceforge.net/projects/mingw/) zawierający kompilator GCC dla Windows. 
:warning: Zwróć uwagę na lokalizację zainstalowania pakietu. Będzie ona potrzebna przy kolejnych krokach.
<br>![mingw_path](img/lab0mingwpath.png)
- Podczas instalacji w jednym z kroków należy zaznaczyć pakiety które chcemy zainstalować.(wszystkie)
<br>![mingw_packages](img/lab0mingwpickpackages.png)
- Po wybraniu pakietów należy kliknąć **installation > Apply Changes** i potwierdzić wybór.
<br>![](img/lab0mingwinstallpackages.png)
- Aby mieć dostęp do narzędzia GCC z terminala cmd lub powershell ścieżka do pliku musi znajdować się w zmiennych systemowych. Sprawdź, czy polecenie jest dostępne wpisując w terminalu `gcc`. **Jeśli w terminalu pojawia się następujący komunikat pomiń następny krok.** 
<br>![cmd_gcc](img/lab0mingwcheckgcc.png)
- Jeśli polecenie gcc nie jest dostępne w menu start znajdź opcję "edit the system enviroment variables" lub w polskiej wersji systemu "edytuj zmienne środowiskowe".  
<br>![windows_env_variables](img/lab0edit_env_variables.png)
    - W kolejnym oknie wybierz "Enviroment Variables" lub "Zmienne środowiskowe" (przycisk powinien znajdować się w tym samym miejscu niezależnie od wersji systemu Windows)
    <br>![windows_env_avariables2](img/lab0edit_env_var2.png)
    - Odszukaj zmieną Path i wciśnij edit.
    <br>![path](img/lab0path.png) 
    - W oknie edit kliknij **New** a potem **Browse** i znajdź lokalizację pliku gcc.exe (folder bin w folderze, gdzie został zainstalowany MinGW). Przykładowo, jeśli MinGW został zainstalowany w lokalizacji C:\Applications\MinGW wpis do Path powinien wyglądać następująco
    <br>![new_path](img/lab0new_path.png)
    - Potwierdź wciskając ok i ponownie przetestuj polecenie gcc w terminalu CMD lub PowerShell. Powinien pojawić się następujący komunikat  
    <br>![cmd_gcc](img/lab0mingwcheckgcc.png)

Po zainstalowaniu i konfiguracji można użyć narzędzia do kompilacji. W tym celu należy uruchomić konsolę systemu, przejść do folderu w którym znajduje się program a następnie wywołać polecenie: `gcc [ścieżka do pliku]`. Po wykonaniu polecenia w folderze gdzie został uruchomiony terminal powinien pojawić się plik wykonywalny `a.exe`.

![Alt text](image-2.png)

![Alt text](image-3.png)

Jeśli chcemy skompilować plik i nadać mu własną nazwę w narzędziu do kompilacji należy zdefiniować flagę `-o` po której podajemy nazwę pliku wyjściowego `gcc [ścieżka do pliku].c -o [ścieżka do pliku wyjściowego].exe`(.exe dla systemu windows).

Skompilowany program można uruchomić na dwa sposoby. Pierwszy to otworzenie folderu i uruchomienie programu poprzez dwukrotne kliknięcie w ikonę. Drugie to uruchomie programu w terminalu. Domyślnie VSCode zabrania uruchamiania plików bez podania ścieżki względnej do obecnego folderu ".\". Zatem program można uruchomić komendą: `.\[ścieżka do programu].exe` 

### Zadanie 2

Skompiluj program `myfirstapp.c` do pliku `myfirstapp.exe`. Następnie uruchom program.



### Pytania

1. Co jest potrzebne to stworzenia programu w języku C?
<details>
Czym jest kompilator? <bR>
Czym jest IDE (Zintegrowane środowisko programistyczne) i w jaki sposób ułatwia pracę programisty? 
</details>

2. Co powinien zawierać program?
3. Czym jest zmienna i jak je deklarować?
4. Jakie znasz typy zmiennych w języku C?
5. Jak działa dyrektywa `#include`?
6. Zadanie biblioteki `<stdio.h>`, `<stdlib.h>` i `<limits.h>`.

### Notatki

Zmienna w języku C jest to symboliczna nazwa, która jest używana do przechowywania danych w pamięci komputera. Zmienne pozwalają programiście przechowywać, manipulować i operować na różnych rodzajach danych, takich jak liczby, tekst czy wartości logiczne. Każda zmienna ma typ, który określa, jakie rodzaje danych można w niej przechowywać, oraz lokalizację w pamięci, gdzie są przechowywane te dane.

#### Deklaracja zmiennej

Deklaracja zmiennej wygląda następująco `[typ zmiennej] [nazwa zmiennej];
np.:


```c
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[]) // każdy program musi mieć punkt startu którym domyślnie jest funkcja main.
{
    int a; // Deklaracja zmiennej a typu całkowitego.
    printf("Wartość zmiennej a: %i",a); // Funkcja printf() służy do wypisywania wartości zmiennej w konsoli. Za ciąg znaków %i zostanie podstawiona wartość przecowywana przez zmienną a.
    return 0;
}
```
Tak zadeklarowana zmienna obecnie odnosi się do danego miejsca w pamięci komputera w którym bity pamięci są w "losowym stanie" a więc nie jesteśmy w stanie przewidzieć jaka wartość jest obecnie przechowywana.

```bash
> 2658304
```

Przy kolejnych uruchomieniach programu możemy dostać inny wynik:

```bash
> 3563520
```

#### Inicjalizacja zmiennej

Aby ustawić ciąg bitów w pamięci a tym samym aby nasza zmienna przechowywała wartości przez nas zdefiniowane używamy operatora przypisania `=`.

```c
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[]) // każdy program musi mieć punkt startu którym domyślnie jest funkcja main.
{
    int a = 3; // Inicjalizacja zmiennej a typu całkowitego.
    printf("Wartość zmiennej a: %i",a); // Funkcja printf() służy do wypisywania wartości zmiennej w konsoli. Za ciąg znaków %i zostanie podstawiona wartość przecowywana przez zmienną a.
    return 0;
}
```

#### Typy danych w języku C

Podstawowe typy zmiennych i literały pozwalające je definiwoać:

```c
int liczbaCalkowita = 432871; // typ przechowuje liczby całkowite w danym zakresie
float liczbaZmiennoprzecinkowa = 3.14; // typ przechowuje liczby zmienno przecinkowe w danym zakresie
char znak = 'a'; // typ przechowuje litery, cyfry i znaki specjalne.
double liczbaZmiennoprzechnkowa = 32.32; // yp przechowuje liczby zmienno przecinkowe z dokładnością większą niż float
```

typy danych i ich limity - biblioteka <limits.h>
```c
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    // Typy całkowite
    // Integer - poniżej zdefiniowane wartośći całkowite przechowują taki sam zakres.
    puts("Integer");
    int i1 = INT_MAX;    // Biblioteka limits.h zawiera stałe np INT_MAX zawierające maksymalną wartość typu int
    signed i2 = INT_MIN; // Słówko kluczowe signed definiuje że typ może przechowywać dodatnie i ujemne wartości.
    int i3 = -32767;
    signed int i4 = 32767; // Typ integer nie powinien mieć problemów z przechowaniem liczb mniejszych od 32767(tego wymaga standard) jednak na różnych systemach maksymalne i minimalne przechowywane wartości mogą się różnić.
    printf("i1 = %d lub i1 = %i \n", i1, i1);
    printf("i2 = %d lub i2 = %i \n", i2, i2);
    printf("i3 = %d lub i3 = %i \n", i3, i3);
    printf("i4 = %d lub i4 = %i \n\n", i4, i4);

    // Long
    puts("Long");
    long l1 = LONG_MAX;
    long int l2 = LONG_MIN;
    signed long l3 = -2147483647;
    signed long int l4 = 2147483647;
    printf("l1 = %li lub i1 = %ld \n", l1, l1);
    printf("l2 = %li lub i2 = %ld \n", l2, l2);
    printf("l3 = %li lub i3 = %ld \n", l3, l3);
    printf("l4 = %li lub i4 = %ld \n\n", l4, l4);

    // Short
    puts("SHORT");
    short si1 = SHRT_MAX;
    short int si2 = SHRT_MIN;
    signed short si3 = -32767;
    signed short int si4 = 32767;
    printf("si1 = %hi lub si1 = %hd \n", si1, si1);
    printf("si2 = %hi lub si2 = %hd \n", si2, si2);
    printf("si3 = %hi lub si3 = %hd \n", si3, si3);
    printf("si4 = %hi lub si4 = %hd \n\n", si4, si4);

    // Long Long
    puts("Long Long");
    long long ll1 = LLONG_MAX;
    long long int ll2 = LLONG_MIN;
    signed long long ll3 = -9223372036854775807;
    signed long long int ll4 = 9223372036854775807;
    printf("ll1 = %lli lub ll1 = %lld \n", ll1, ll1);
    printf("ll2 = %lli lub ll2 = %lld \n", ll2, ll2);
    printf("ll3 = %lli lub ll3 = %lld \n", ll3, ll3);
    printf("ll4 = %lli lub ll4 = %lld \n\n", ll4, ll4);

    // Char
    puts("Char");
    char c1 = CHAR_MAX;
    char c2 = CHAR_MIN;
    signed char c3 = -128;
    signed char c4 = 127;
    char c5 = '\0'; // NULL
    printf("c1 = %c lub liczba odpowiadajaca znakowi c1 = %hhi\n", c1, c1);
    printf("c2 = %c lub liczba odpowiadajaca znakowi c2 = %hhi\n", c2, c2);
    printf("c3 = %c lub liczba odpowiadajaca znakowi c3 = %hhi\n", c3, c3);
    printf("c4 = %c lub liczba odpowiadajaca znakowi c4 = %hhi\n", c4, c4);
    printf("c5 = %c lub liczba odpowiadajaca znakowi c5 = %hhi\n\n", c5, c5);

    // Za pomocą słowa kluczowego unsigned możemy zdefiniować zmienne przechowujące wartości tylko dodatnie.
    puts("Unsigned int");
    unsigned u1 = UINT_MAX;
    unsigned int u2 = 0;
    unsigned int u3 = -1;
    printf("u1 = %u\n", u1);
    printf("u2 = %u\n", u2);

    puts("Unsigned char");
    unsigned char u4 = UCHAR_MAX;
    unsigned char u5 = 0;
    printf("u4 = %c lub liczba odpowiadajaca znakowi u4 = %hhu\n", u4, u4);
    printf("u5 = %c lub liczba odpowiadajaca znakowi u5 = %hhu\n", u5, u5);

    puts("Unsigned short");
    unsigned short u6 = USHRT_MAX;
    unsigned short int u7 = 0;
    printf("u6 = %hu\n", u6);
    printf("u7 = %hu\n", u7);

    puts("Unsigned long");
    unsigned long u8 = ULONG_MAX;
    unsigned long int u9 = 0;
    printf("u8 = %lu\n", u8);
    printf("u8 = %lu\n", u9);

    puts("Unsigned long long");
    unsigned long long u10 = ULONG_MAX;
    unsigned long long int u11 = 0;
    printf("u10 = %llu\n", u10);
    printf("u11 = %llu\n\n", u11);

    // Typy zmiennoprzecinkowe
    // Float
    puts("Float");
    float f1 = 3.14159265359;
    printf("f1 = %f lub zaokraglajac f1 = %.2f f1 = %.3f\n\n", f1, f1, f1);

    // Double
    puts("Double");
    double d1 = 3.14159265359;
    printf("d1 = %lf lub zaokraglajac d1 = %.2lf d1 = %.3lf\n\n", d1, d1, d1);


    // Long double
    puts("Long Double");
    long double ld1 = 3.14159265359;
    printf("ld1 = %Lf lub zaokraglajac ld1 = %.2Lf ld1 = %.3Lf\n\n", ld1, ld1, ld1);

    return 0;
}
```


Stałe definiujemy dopisując przed definicją zmiennej `const` lub dytektywą `#define`. Wartości stałej w przeciwieństwie do zmiennej dynamicznej nie możemy pomownie przypisać.
```c
int main(int argc, char const *argv[])
{

int a = 12;
const B = 54;

// dozwolona jest zmiana wartości a
a = 43;

// nie dozwolone jest przypisanie nowej wartości stałej
B = 66; // Po zakomentowaniu tej linii program się skompiluje.
}
```

#### Tablice

Zmienne tablicowe przechowują w nastepujących po sobie adresach pamięci zmienne określonego typu. W ten sposób możemy definiować łańcuchy znaków.

```c
char string[20]; // utworzenie zmiennej string która przechowuje 20 zmiennych char do których odwołujemy się po indeksach.
string[0] = 'H'; // przypisanie do pierwszego zarezerwowanego adresu litery 'H'
string[1] = 'e';
string[2] = 'l';
string[3] = 'l';
string[4] = 'o';
string[5] = ' ';
string[6] = 'C';
printf("%c", string[6]); // Wypisanie znaku na 7 miejscu w tablicy.
printf("%s",string); // Wypisanie całej tablicy.
```

Literał ułatwiający przypisanie wartości do kolejnych elementów tablicy(wynik działania programu będzie taki sam jak poprzedniego):

```c
char string2[20] = "Hello C";
printf("%s",string2);
```

[Biblioteki standardowe w języku C](https://pl.wikibooks.org/wiki/C/Biblioteka_standardowa/Indeks_tematyczny)

[Zmienne](https://pl.wikibooks.org/wiki/C/Zmienne)

[`prinftf(const char *format, ...)`](https://pl.wikibooks.org/wiki/C/printf)

[`scanf(const char *format, ...)`](https://pl.wikibooks.org/wiki/C/scanf)


## Zadania

Przeanalizuj działanie programów z sekcji Notatki.

Na końcu programów dodaj instrukcję zatrzymującą działanie programu do momentu wciśnięcia klawisza opisanej pod następującym linkiem [link](https://pl.wikibooks.org/wiki/C/systemł)

### koledzy.exe
utwórz program task1.exe który przechowuje w następujących zmiennych:
- `name` - twoje imię
- `surname` - twoje nazwisko
- `age` - twój wiek
- `albumNumber` - twój numer albumu
- `PI_VALUE` - wartość liczby pi(stała wartość - constant)

 a następnie wypisuje w standardowym wyjściu te informacje.

Utwórz zmienne przechowujące te same informacje na temat kolegów. Wypisz te informacje w konsoli.

### operatory.exe

Utwórz plik operatory.c a następnie wykonaj poniższe polecenia.\
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
printf("Wynik działania 16 + 5 = %i",result1);
```

### suma.exe

Napisz program który pyta użytkownika o wartości liczb `a` i `b` a następnie wypisuje ich sumę.

### kalkulator.exe

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
**Operatory porównania**
Uzupełnij tabelkę.

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

Przetestuj działanie instrukcji `if` oraz `switch` przez napisanie programu który prosi użytkownika o wpisanie liczby a nastepnie sprawdza czy podana liczba jest podzielna przez 2 i wypisuje odpowiednią informacje.

Napisz program który prosi użytkownika o podanie pierwszej wartości liczbowej, wybranie działania przez wpisanie:
"+" - dodawanie
"-" - odejmowanie
"*" - mnożenie
"/" - dzielenie
Następnie drugiej wartości liczbowej po której akcepracji w konsoli pojawi się wynik działania.



### BMI.exe
Napisz program w języku C, który obliczy wskaźnik masy ciała (BMI) dla użytkownika na podstawie jego wagi (w kilogramach) i wzrostu (w metrach). Program powinien następnie ocenić stan zdrowia użytkownika na podstawie wartości BMI i wyświetlić odpowiedni komunikat.

Oto przykład kategorii BMI i ich ocen:

BMI < 18.5: Niedowaga
18.5 <= BMI < 25.0: W normie
25.0 <= BMI < 30.0: Nadwaga
BMI >= 30.0: Otyłość

 #### Uwaga!
 Działanie każdego programu należy przetestować. W programie kalkulator przykładowo należy sprawdzić co się stanie gdy spróbujemy dzielić przez 0. Pomyśl czy w programie występują inne sytuacje powodujące błędy i spróbuj je naprawić.


