# C

Wybrać jedno z poniższych zadań.
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## 3.0



## 4.0
Utwórz program `db_macierzodleglosci`.

Napisz funkcję `allocate_2d_array()` która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Napisz funkcję `free_2d_array()` która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji.
W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy w następującej postaci:

```terminal
| 0.00      | 0.10      |
| 1.00      | 4331.10   |
| 2.00      | 42.10     |
```

Utwórz funkcję `euclidDistance()` która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesową na podstawie wartości tablic według wzoru:

$$
d(p,q)=\sqrt{\sum_{i=1}^{n}\left(q_{i}-p_{i}\right)^2} 
$$

Utwórz funkcję `distnaceMatrix()` która oblicza odległości pomiędzy kolejnymi wierszami macierzy przekazanej jako parametr funkcji i wpisuje do nowej macierzy obliczone wartości. np. mając macierz:

```
| 0.00      | 0.00      |
| 0.00      | 1.00      |
| 0.00      | 2.00      |
```

wynikiem działania będzie macierz 3x3 gdzie w komórce [1,1] jest odległośc pomiędzy 1 a 1 wierszem,w komórce [1,2] odległość pomiędzy 1 a 2 wierszem, w komórce ...
w komórce [3,3] odległośc pomiędzy 3 a 3 wierszem:

```
| 0.00      | 1.00      | 2.00      |
| 1.00      | 0.00      | 1.00      |
| 2.00      | 1.00      | 0.00      |
```

W metodzie main() utwórz następujące menu:

```
1. Wprowadz macierz
2. Wyswietl macierz
3. Macierz odleglosci
4. Wyjscie
```

Po wybraniu opcji 1 program pyta użytkownika o rozmiar macierzy, alokuje miejsce na tę macierz a następnie użytkownik wypełnia macierz danymi.

```
Wybrano 1 - Wprowadz macierz.
Wprowadz liczbe wierszy: 2
Wprowadz luczbe kolumn: 2
tab[1][1] = 1
tab[1][2] = 3
tab[2][1] = 3
tab[2][2] = 2
```

Po wybraniu opcji 2 program wyświetla macierz za pomocą funkcji print_matrix()

Po wybraniu opcji 3 program wyświetla macierz odległości macierzy przechowywanej aktualnie w pamięci.

Program powinien działać aż do momentu wybrania opcji wyjście. Pamięć powinna być zwalniana w odpowiednim momencie.

## 5.0
