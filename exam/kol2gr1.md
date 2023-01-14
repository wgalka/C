# Kolokwium 2

## Dostateczny

### EK_3

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy liczb zmiennoprzecinkowych w następującej postaci:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

Funkcja może wypisać zawartość macierzy o dowolnym rozmiarze.

```terminal
| 0.00 | 0.10 | 0.50 |
| 1.00 | 1.10 | 1.40 |
| 2.00 | 2.10 | 2.10 |
| 2.00 | 2.10 | 2.10 |
| 1.00 | 1.10 | 1.40 |
```

Napisz funkcję `matrix_mean()` która zwraca średnią wartość elementów macierzy.

### EK_4

Przetestuj działanie funkcji na nastepujących macierzach:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 | 
| 2.00 | 2.10 | 
```

```terminal
| 1.00 | 3.00 |
| 2.00 | 5.00 |
```

```terminal
| 1.00 | 3.00 | 10.00 |
| 2.00 | 5.00 | 9.00  |
```

Napisz program który zapisze w pliku `wyniki.txt` macierz a pod nią średnią wartość z tej macierzy dla wszystkich testowanych przypadków np.:
```csv
| 1.00 | 3.00 | 10.00 |
| 2.00 | 5.00 | 9.00  |

mean: 10.00
```

## Dobry

### EK_3

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy(macierz powinna być alokowana dynamicznie z użyciem odpowiednich funkcji) liczb zmiennoprzecinkowych w następującej postaci:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

Napisz funkcję `free_matrix()` która zwalnia dynamicznie przydzieloną pamięć do przechowania macierzy.

Napisz funkcję `duplicate_row()` która duplikuje wybrany wiersz `n` razy i podmienia macierz na nową - większą np. duplikując 2 wiersz 2 razy otrzymamy:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |


| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

### EK_4

Napisz funkcję main która przetestuje działanie zaimplementowanych wcześniej funkcji i wyniki zapisze w pliku `wyniki.txt`

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą:
- liczbę kolumn macierzy
- liczbę wierszy macierzy
- wskaźnik na wskaźniki przechowujące liczby **zmiennoprzecinkowe**

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array` i przyjmuje następujące parametry:
- liczba wierszy macierzy
- liczba kolumn macierzy
Funkcja tworzy nową instancję struktury `Array` do której przypisuje liczbę wierszy i kolumn.
Następnie rezerwuje w pamięci miejsce na przechowanie dwuwymiarowej tablicy i przypisuje wskaźnik do tego miejsca w odpowiednie pole struktury `Array`.
Kompletna instancja jest zwracana przez funkcję.

Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

```terminal
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

Utwórz funckję `fillArray()` która przyjmuje instancję klasy `Array` i prosi użytkownika o wypełnienie zawartości tablicy.
Przykładowa sesja:
```terminal
Array[0][0] = 1
Array[0][1] = 1
Array[1][0] = 1
Array[1][1] = 1
Array[2][0] = 11
Array[2][1] = 1
```

Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy. Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz
- funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy

W metodzie `main()`:
- Utwórz dwie zmienne o typie `Array`.
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3
- Wywołaj funkcję `fillArray()` by wypełnić macierze wartościami
- Wywołaj funkcję `multiplyArrays()` przekazując utworzone macierze
- Wypisz wynik mnożenia macierzy w konsoli (funkcja `printArray()`)

### EK_4

Zapisz wyniki 


# Efekt EK_03:
## DST: 
Student potrafi poprawnie przygotować programy rzędu 20-50  linii kodu, rozwiązujące proste problemy,  wykorzystując  do  tego  celu  niektóre  z  poznanych  struktur  danych  oraz  konstrukcje programistyczne dostępne w języku C.

## DB:  
Student  potrafi  poprawnie  przygotować  programy  rzędu  20-50  linii  kodu,  rozwiązujące średniozaawansowane problemy, wykorzystując do tego celu wszystkie poznane struktury danych oraz konstrukcje programistyczne dostępne w języku C.

## BDB:
Student  potrafi  poprawnie  przygotować  programy  rzędu  50-100  linii  kodu  rozwiązujące średniozaawansowane problemy, wykorzystując do tego celu wszystkie poznane struktury danych oraz konstrukcje programistyczne dostępne w języku C.Efekt 

# EK_04:
## DST: 
Student potrafi poprawnie przygotować programy rzędu 20-50 linii kodu, rozwiązujące proste problemy  wykorzystując  do  tego  celumożliwości  standardowych  bibliotek  programistycznych dostępnych w języku C używanych na zajęciach.

## DB:  
Student  potrafi  poprawnie  przygotować  programy  rzędu  20-50  linii  kodu,  rozwiązujące średniozaawansowane  problemy,  wykorzystując  możliwości  standardowychbibliotek programistycznych dostępnych w języku C używanych na zajęciach.
## BDB:  
Student  potrafi  poprawnie  przygotować  programy  rzędu  50-100  linii  kodu,  rozwiązujące średniozaawansowane  problemy,  wykorzystując  możliwości  standardowych  bibliotek programistycznych dostępnych w języku C, także takich, które student poznawał samodzielnie