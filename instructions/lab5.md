# PPWJC
lab5 - Biblioteki standardowe

## Pytania

## Przykłady
### typy danych i ich limity - biblioteka <limits.h>
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
    double ld1 = 3.14159265359;
    printf("ld1 = %Lf lub zaokraglajac ld1 = %.2Lf ld1 = %.3Lf\n\n", ld1, ld1, ld1);

    return 0;
}
```

### Czas - [<time.h>](https://www.tutorialspoint.com/c_standard_library/time_h.htm)
```c
#include <time.h>
#include <stdio.h>
#include <unistd.h> // biblioteka zawiera funkcję sleep która wstrzymuje wykonanie programu o dany czas

int main(int argc, char const *argv[])
{
    // time()
    time_t time0 = 0;
    time_t timenow = time(NULL);
    printf("1 stycznia 1970 minelo = %ld sekund\n", time0);
    printf("Od 1 stycznia 1970 minelo = %ld sekund\n", timenow);

    // difftime()
    time_t time1 = time(NULL);
    sleep(2);
    time_t time2 = time(NULL);
    time_t timediff = difftime(time2,time1); // za pomocą funkcji difftime można obliczyć różnicę pomiędzy datami
    printf("time2 - time1 = %ld sekund\n", timediff);

    // ctime()
    char *timestring;
    timestring = ctime(&timenow);
    printf("data = %s",  timestring);

    // strftime() https://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm
    struct tm *info;
    char data[80];
    info =  localtime(&timenow);
    strftime(data,80,"%A %d %B %Y", info);// funkcja zapisuje date w formacie łańcucha znaków do pierwszego argumentu. https://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm
    printf("Data w zdefiniowanym formacie - |%s|\n", data );

    return 0;
}
```

### <string.h>

```c

```

### [<math.h>](https://cpp0x.pl/dokumentacja/standard-C/cmath-math-h/101)

```c
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x = 0.5;
    double y = 0.1;
    double result;

    printf("%.16lf \n", M_PI);

    // poniższe funkcje przyjmują i zwracają wartości wyrażone w radianach
    result = acos(x);
    printf("arc cos = %lf \n", result);

    result = asin(x);
    printf("arc sin = %lf \n", result);

    result = atan(x);
    printf("arc tangent = %lf \n", result);

    result = atan2(y, x); //https://en.wikipedia.org/wiki/Atan2
    printf("the angle θ between the ray to the point (x, y) and the positive x-axis = %lf \n", result);
   
    result = cos(x);
    printf("cosine = %lf \n", result);

    result =  sin(x);
    printf("sine = %lf \n", result);

    // eksponenta https://en.wikipedia.org/wiki/Exponential_function
    result = exp(x);
    printf("exp(%lf) = %lf \n",x, result);

    // logarytm naturalny https://en.wikipedia.org/wiki/Natural_logarithm
    result = log(x);
    printf("log(%lf) = %lf \n",x, result);

    // logarytm o podstawie 10
    result = log10(x);
    printf("log10(%lf) = %lf \n",x, result);

    // dzieli liczbę na części ułamkowe i całkowite
    double fraction, total;
    fraction = modf(x, &total);
    printf("frac part = %lf total part = %lf  \n",fraction, total);
    
    // podnoszenie liczby do potęgi.
    double a = 2, b = 4;
    result = pow(a, b);
    printf("%.0lf^%.0lf = %.0lf \n", a,b, result);

    // pierwiastek kwadratowy
    result = sqrt(x);
    printf("sqrt(%lf) = %lf \n",x,  result);

    // najbliższa liczba całkowita zaokrąglając w górę.
    result = ceil(x);
    printf("ceil(%lf) = %lf \n",x,  result);

    // najbliższa liczba całkowita zaokrąglając w dół.
    result =  floor(x);
    printf("floor(%lf) = %lf \n",x,  result);

    // wartość absolutna - pozbycie się minusa przy liczbie
    double c = -10.99;
    result = fabs(c);
    printf("fabs(%lf) = %lf \n",c,  result);

    // oblicza resztę z dzielenia dla liczb rzeczywistych (% dla liczb całkowitych)
    result = fmod(x, y);
    printf("fmod(%lf, %lf) = %lf \n",x,y,  result);
    return 0;
}
```

## Zadania
### Zadanie 0
Przeanalizuj działanie przykłądów.

### Zadanie 1
Za pomocą pętli wypisz znaki i ich kody ASCII.

### Zadanie 2
Napisz funkcję `radianToDegree()` oraz `degreeToRadian()` zamieniającą radiany na stopnie oraz stopnie na radiany. Funkcja powinna zwracać typ double.

$$
\alpha(rad) = \frac{\alpha(^\circ)*\pi}{180^\circ}
$$

$$
\alpha(^\circ) = \frac{\alpha(rad)* 180^\circ}{\pi}
$$

