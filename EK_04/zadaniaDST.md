# Grawitacja

Napisz funkcję która "włącza grawitację" w tablicy dwuwymiarowej. Tablica jest wypełniona różnymi blokami(znaki alfanumeryczne). Znak " " reprezentuje pustą przestrzeń - powietrze. Niektóre z bloków zawieszone są w powietrzu.
W wyniku działania funkcji bloku powinny "spaść" na dolną krawędź macierzy.

## Przykład:

Mamy następującą macierz:

```terminal
[[' ', ' ', 'A', ' '],
 ['B', ' ', ' ', 'C'],
 [' ', 'D', 'D', ' '],
 [' ', 'A', ' ', ' ']
]
```

W wyniku działania funkcji otrzymamy następującą macierz:

```terminal
[[' ', ' ', ' ', ' '],
 [' ', ' ', ' ', ' '],
 [' ', 'D', 'A', ' '],
 ['B', 'A', 'D', 'C']
]
```

# Tworzenie macierzy "warstwowej"

Napisz funkcję która przyjmuje ilość wierszy oraz ilość kolumn. Funkcja zwraca macierz wypełnioną cyframi w taki sposób że:
1. Pierwszy i ostatni wiersz/kolumna są wypełnione jedynkami.
2. Wszystkie elementy w drugim i przedostatnim wierszu/kolumnie mają wartość 2, z wyjątkiem elementów z kroku 1.
3. Wszystkie elementy w trzecim oraz trzecim od końca wierszu/kolumnie mają wartość 3, z wyjątkiem elementów z poprzednich kroków.
4. ...

Algorytm działa aż macierz zostanie wypełniona.

## Przykład:

Po podaniu jako argumenty funkcji 5 column i 8 wierszy funkcja zwróci:
```
[[1, 1, 1, 1, 1],
 [1, 2, 2, 2, 1],
 [1, 2, 3, 2, 1],
 [1, 2, 3, 2, 1],
 [1, 2, 3, 2, 1], 
 [1, 2, 3, 2, 1],
 [1, 2, 2, 2, 1],
 [1, 1, 1, 1, 1]]
```

Po podaniu jako argumenty funkcji 10 kolumn i 9 wierszy funkcja zwróci:

```
[[1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
 [1, 2, 2, 2, 2, 2, 2, 2, 2, 1],
 [1, 2, 3, 3, 3, 3, 3, 3, 2, 1], 
 [1, 2, 3, 4, 4, 4, 4, 3, 2, 1], 
 [1, 2, 3, 4, 5, 5, 4, 3, 2, 1], 
 [1, 2, 3, 4, 4, 4, 4, 3, 2, 1], 
 [1, 2, 3, 3, 3, 3, 3, 3, 2, 1], 
 [1, 2, 2, 2, 2, 2, 2, 2, 2, 1], 
 [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]]
```
