---
title: C - kolokwium 2
layout: default
---

# C - kolokwium 2

Pliki *CSV* (Comma-Separated Values) to format przechowywania danych, w którym zazwyczaj pierwsza linia zawiera nazwy kolumn gdzie wartości są oddzielone `,`:

<div class="codeblock-label">example.csv</div>
```yaml
kolumna A, Kolumna B, Kolumna C, Kolumna D
```
Kolejne linie w pliku *CSV* zawierają dane, które również oddzielone są separatorem `,`:

<div class="codeblock-label">example.csv</div>
```yaml
kolumna A, Kolumna B, Kolumna C, Kolumna D
1, A, 3, 4.0
2, B, 3, 4.0
3, C, 3, 5.0
```


 Pliki CSV mogą również używać innych separatorów, takich jak średnik np. `;`,`|` lub `\t`.

 <div class="codeblock-label">example.csv</div>
```yaml
kolumna A; Kolumna B; Kolumna C; Kolumna D
1; A; 3; 4.0
2; B; 3; 4.0
3; C; 3; 5.0
```

**Zadanie będzie polegać na stworzeniu biblioteki umożliwiającej wczytanie pliku CSV, wykonanie okreslonych operacji na wczytanym pliku oraz zapis rezultatów.**

## Krok 1 - Przechowywanie danych

Znając strukturę pliku CSV należy wymyśleć sposób przehcowywania danych w pamięci komputera z wykorzytsaniem podstawowych konstrukcji języka C.

Wiemy że pierwsza linia odczytanego pliku to nagłówek i skłąda się on z `n` łańcuchów znaków gdzie `n` to liczba kolumn. Łańcuch znaków jest to tablica przechowująca typ `char`. Zatem aby przechować nagłówek będzie potrzebne `n` tablic zdolnych przechować wszystkie znaki z poszczególnych nazw kolumn. Dla uproszczenia wstępnie możemy przyjąć założenia że liczba kolumn nie przekroczy 10 a liczba znaków w nazwie kolumny 100 znaków. Z tymi założeniami możemy utworzyć zmienną przechowującą nasz nałówek w następujący sposób:

<div class="codeblock-label">main.c</div>
```c
char header[10][100] = {'\0'}; // 10 kolumn po 100 znaków. {'\0'} uzupełnia tablicę wartościami pustymi.
```

Kolejne linie przechowują dane. Zazwyczaj są to wartości liczbowe stąd dla ułatwienia przyjmiemy że wartość w każdej komórce jest typu `double` który umożliwi przechowanie wartości zarówno całkowitych jak i zmienno przecinkowych oraz stosunkowo precyzyjne operacje arytmetyczne na danych.

W jednej linii pliku `CSV` jest przechowywane założone 10 wartości(10 kolumn). Plik ma `m` linni. Dla ułatwienia możemy przyjąć że nasz plik z danymi może maksymalnie mieć 1000 lini. Stąd aby przechować dane najprostszym sposobem jest stworzenie tablicy którą możemy zadeklarować w poniższy sposób:

<div class="codeblock-label">example.csv</div>
```c
double data[10][1000] = {0.0};
```

Jeśli nasz program miałby wczytać więcej niż jeden plik `CSV` możemy zorganizować powstałe zmienne w strukturę o przykładowej nazwie `DataMatrix`.

### Zadanie

Utwórz plik nagłówkowy `csvreader.h`. W pliku utwórz strukturę `DataMatrix` będącą w stanie przechować zawartość pliku *CSV* zakładając podane wcześniej ograniczenia.
Utwórz plik `main.c` w którym jest zaimportowany plik nagłówkowy `csvreader.h`.

## Krok 2 - wczytanie danych




## DST

Napisz program w języku C, który wczytuje dane z pliku tekstowego o określonej liczbie kolumn i wierszy (5 x 5). Przykładowy plik:

```yaml
ID, Population (millions), GDP per Capita (USD), Life Expectancy (years), Internet Users (%)
1, 331, 62645, 78.9, 87.36
2, 1441, 10261, 76.9, 61.20
3, 1393, 2104, 69.7, 41.00
4, 83, 48623, 81.2, 90.60
5, 213, 9196, 75.1, 72.10
```

Program powinien również umożliwiać obliczenie średniej arytmetycznej dla wybranej kolumny lub wiersza. Możliwa jest też modyfikacja wczytanych danych oraz zapis.

1. W programie powinna być możliwość wczytania danych ze wskazanego pliku oraz o dowolnym znaku separującym kolumny (w przykładzie jest to "," takim znakiem możę być również "/"). (może być to zrealizowane przy pomocy funkcji o odpowiednich parametrach)

```c
Matrix matrix = readData("sciezka do pliku", 'symbol separatora');
```

2. Wczytane dane będą przechowywane w strukturze. Należy odpowiednio zdefiniować jej pola. Oprócz danych powinny być też zachowane nazwy kolumn.

```
Struktura powinna być w stanie przechować nagłówki pliku oraz dane liczbowe.
```

3. W programie powinniśmy mieć możliwość obliczenia średniej arytmetycznej z danego zakresu np. 2 kolumny, 3 wiersza lub średnią z drugiej i trzeciej kolumny. (może to być realizowane za pomocą funkcji)

```c
Double mean = calculateMean(matrix,"row", 3); // obliczy średnią w 3 wierszu
Double mean = calculateMean(matrix ,"col", 3); // obliczy średnią w 3 kolumnie
```

4. Użytkownik powinien mieć możliwość edycji nazw kolumn lub wartości w danym wierszu i kolumnie. Po modyfikacji powinien mieć możliwość zapisania resultatów do tego samego lub innego pliku.

```c
edit(matrix, 1,2,3); // wstawienie do 1 wiersza 2 kolumny wartości 3
```

Przetestuj wszystkie funkcjonalności programu. Każdy z testów opisz odpowiednim komentarzem.

## DB

Program z zadania DST jednak możliwe jest wczytanie danych z pliku o dowolnej liczbie kolumn i wierszy.

```yaml
ID, Age, Height (cm), Weight (kg), GPA, Salary (USD), Experience (years), Bonus (%)
1, 32, 180, 75, 3.5, 80000, 5, 10
2, 28, 165, 60, 4.0, 90000, 8, 15
3, 35, 175, 80, 2.8, 120000, 10, 12
4, 30, 160, 55, 3.2, 100000, 7, 8
5, 40, 185, 90, 3.8, 110000, 12, 18
```

Ponadto przy obliczaniu średniej możliwe będzie podanie zakresu np. 2, 3 i 5 kolumny ale tylko wartości od 3 do 5 wiersza w wymienionych kolumnach. np. z poniższego przykładu:

```yaml
ID, Population (millions), GDP per Capita (USD), Life Expectancy (years), Internet Users (%)
1, 331, 62645, 78.9, 87.36
2, 1441, 10261, 76.9, 61.20
3, 1393, 2104, 69.7, 41.00
4, 83, 48623, 81.2, 90.60
5, 213, 9196, 75.1, 72.10
```

zostałyby wybrany następujący wycinek danych do obliczenia średniej:

```yaml
1393, 2104, 41.00
83, 48623, 90.60
213, 9196, 72.10
```

## BDB

Program z zadania DST jednak możliwe jest wczytanie danych z pliku o dowolnej liczbie kolumn, wierszy oraz dowolny typ danych w kolumnie który program sam powinien rozpoznać.

```yaml
ID, Name, Age, GPA, Passed
1, John, 25, 3.5, true
2, Alice, 30, 4.0, true
3, Bob, 22, 2.8, false
4, Mary, 28, 3.2, true
```

Ponadto średnią obliczyć można tylko dla kolumn gdzie typ danych to liczba. Przy obliczaniu średniej możliwe będzie podanie zakresu np. 2, 3 i 5 kolumny ale tylko wartości od 3 do 5 wiersza w wymienionych kolumnach. np. z poniższego przykładu:

```yaml
ID, Population (millions), GDP per Capita (USD), Life Expectancy (years), Internet Users (%)
1, 331, 62645, 78.9, 87.36
2, 1441, 10261, 76.9, 61.20
3, 1393, 2104, 69.7, 41.00
4, 83, 48623, 81.2, 90.60
5, 213, 9196, 75.1, 72.10
```

zostałyby wybrany następujący wycinek danych do obliczenia średniej:

```yaml
1393, 2104, 41.00
83, 48623, 90.60
213, 9196, 72.10
```