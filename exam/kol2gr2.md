# Kolokwium 2

Wybrać jedno z poniższych zadań. Rozwiązanie nazwać nazwą oceny za wybrane zadanie. Przykładowe nazwy plików z rozwiązaniem `dst.c` i `dst.exe` lub `db.c` i `db.exe`. Po zakończeniu kolokwium pliki skapkować w archiwum .zip i przesłać za pomocą formularza.

{% include 'exam\kol2header.md' %}

## Dostateczny

### EK_3

Napisz funkcję `duplicate_element()` która w tablicy jednowymiarowej znaków powiela wybrany element(wartość przekazana jako parametr funkcji) n razy. Jeśli ilość elementów przekroczy rozmiar tablicy wypisz "Warning: number of elements exceed Array size!". 

Napisz funkcję `print_array()` która wypisze elementy tablicy w podanym niżej formacie:

```terminal
['a', '1', 'g', 'c', 'c']
```

Przetestuj działanie funkcji na wybranych przykładach.
### EK_4

W metodzie main napisz program który zapisze wyniki z poprzedniego zadania do pliku wyniki.txt

## Dobry

### EK_3
Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy(macierz powinna być alokowana dynamicznie z użyciem odpowiednich funkcji) liczb zmiennoprzecinkowych w następującej postaci:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

Utwórz funkcję `euclidDistance()` która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesa pomiędzy punktami określonymi przez wartości tablic według wzoru:

$$
d(p,q)=\sqrt{\sum_{i=1}^{n}\left(q_{i}-p_{i}\right)^2} 
$$

A następnie zwraca obliczoną wartość.

Utwórz zmienną przechowującą następujące macierze

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

```terminal
| 0.00 | 0.10 | 5.10 |
| 1.00 | 1.10 | 8.10 |
| 2.00 | 2.10 | 1.10 |
```

W funkcji main oblicz i wypisz obległości pomiędzy wszystkimi wektorami tj. pomiędzy 1 i 1, pomiędzy 1 i 2, pomiędzy 1 i 3 .... poiędzy 3 i 3. Dla każdej z macierzy.

### EK_4

Zmodyfikuj program tak aby obliczone wyniki zostały zapisane do pliku `wyniki.txt`.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą dane niezbędne do wykonywania działań na macierzy takich jak odczytywanie wierszy i kolumn oraz wyznacznik macierzy.

Utwórz funkcję `detArray()` przyjmującą instancje struktury `Array`. W ciele funkcji zaimplementuj przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:
$$
a[j,k] = a[j,k] - a[j,i]/a[i,i] * a[i,k] \text{ if a[i,i] != 0 jeśli a[i,i] == 0 zwróć wyjątek}
$$

gdzie poszczególne indeksy zmieniają się według sekwencji:
- i = 1,...,n-1
- j = i+1,...,n
- k = i+1,...,n

Po przekształceniu możliwe jest obliczenie wyznacznika macierzy mnożąc elementy na przekątnej. Poniżej liczbą 1 zaznaczono elementy z których trzeba policzyć iloczyn.

```terminal
[1 0 0 0]
[0 1 0 0]
[0 0 1 0]
[0 0 0 1]
```

Funkcja powinna zwracać komunikaty jeśli macierz jest inna niż kwadratowa.


[więcej informacji](https://pracownik.kul.pl/files/10382/public/aan_w5_1819.pdf)

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

```terminal
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

Utwórz funckję `fillArray()` która przyjmuje instancję klasy `Array` i prosi użytkownika o wypełnienie zawartości tablicy. Po wypełnieniu zawartości obliczany jest wyznacznik macierzy i uzupełniane odpowiednie pole struktury `Array`.

Przykładowa sesja:
```terminal
Array[0][0] = 2.0
Array[0][1] = 4.42
Array[1][0] = 5.2
Array[1][1] = 6.0
Array[2][0] = 9
Array[2][1] = 22.4
```



W metodzie `main()`:
- Utwórz dwie zmienne o typie `Array`.
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3
- Wywołaj funkcję `fillArray()` by wypełnić macierze wartościami
- Wywołaj funkcję `multiplyArrays()` przekazując utworzone macierze
- Wypisz wynik mnożenia macierzy w konsoli (funkcja `printArray()`)

### EK_4

Zapisz wynik mnożenia macierzy w pliku tekstowym `wyniki.txt` w postaci:

```csv
1.00    2.00    3.00
4.00    5.00	2.00

X

1.00	4.00
3.00	1.00
5.00	4.00

=

22.00	18.00
29.00	29.00
```


<details>

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

</details>
