# PPWJC

Gra w kółko i krzyżyk

Aktualny stan gry będzie przechowywany w 2 wymiarowej tablicy znaków.
```c
char tab[3][3] = { {" ", " ", " "},
                  {" ", " ", " "},
                  {" ", " ", " "} }
```

Napisz funkcję `showboard()` która w konsoli wypisze obecny stan gry w następującej postaci:
```terminal
 ABC
1   
2   
3   
```

```terminal
 ABC
1X O
2 XO
3  X
```

