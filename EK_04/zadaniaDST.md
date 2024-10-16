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
