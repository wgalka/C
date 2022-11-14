# PPWJC

Gra w kółko i krzyżyk
https://drive.google.com/drive/folders/1-ceXITf1pQ7zAF0N5p8NqOXGnKtbVl4-?usp=sharing

## Zadania

### `TicTacToe.exe`
Aktualny stan gry będzie przechowywany w 2 wymiarowej tablicy znaków.
```c
char tab[3][3] = { {' ', ' ', ' '},
                   {' ', ' ', ' '},
                   {' ', ' ', ' '} }
```
#### Krok 1
Napisz funkcję `renderboard()` która w konsoli wypisze obecny stan gry w następującej postaci:
```terminal
  A B C
1   
2   
3   
```

```terminal
  A B C
1 X   O
2 X O
3   X
```
Funkcja powinna być w stanie wyrenderować planszę o rozmiarach od 3x3 do 26x26 pól.
Przetestuj działanie funkcji.
na tablicach:
<details>
<summary>Tablice testowe</summary>

```c
int const TAB_SIZE = 4;
char board[TAB_SIZE][TAB_SIZE] = { {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '} };
```

```c
//Można zmienić rozmiar tablicy na mniejszy/więszy
int const TAB_SIZE = 26;
char board[TAB_SIZE][TAB_SIZE];
//w funkcji main ustawiane są wartośći w tablicy
int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < TAB_SIZE; i++)
    {
        for (size_t j = 0; j < TAB_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
    return 0;
}
```

</details>

<details>
<summary>Podpowiedź</summary>

```c
// Typ char przechowuje liczby od 0 do 255 które w funkcji printf() są dekodowane na znaki widoczne w konsoli.
// A - 65
// Z - 90
// a - 97
// z - 122
for(char i = 65; i<91; i++){
    printf("%c ", i);
}
```

Nagłowki kolumn można wypisać przed wypisywaniem wartości planszy.

Nagłówki wierszy można wypisać przed iteracją po drugim wymiarze tablicy.
</details>

#### Krok 2
Napisz funkcję `makeMove()` która przyjmuje symbol danego gracza na planszy i zwraca następujące kody:
- 0 - jeśli ruch jest dozwolony (zajmujemy puste pole)
- 1 - jeśli wykraczamy poza obszar planszy
- 2 - jeśli chcemy zająć pole innego gracza
- 3 - inne błędy
W ciele funkcji zaimplementuj zapytania do użytkownika o wybranie pola które chce zająć.

<details>
<summary>Podpowiedź</summary>

Za pomocą instrukcji scanf() możemy odczytać kilka wartości jednocześnie.

```c
char col;
int row;
printf("Podaj wartośc col i row np.  ", player);
scanf(" %c %i", &col, &row);
```

Po odczytaniu wartości wystarczy zamienic je na indeksy (numerowane od 0) i sprawdzić odpowiednie warunki.
</details>

#### Krok 3
Napisz funkcję `score()` która sprawdzi w pionie, poziomie i po przekątnej czy jeden z graczy wygrał, a jeżeli tak zwróci jego symbol.

<details>
<summary>Podpowiedź</summary>

Należy sprawdzać czy w kolumach, wierszach, na przekątnych znajdują się takie same znaki.
Jeśli natrafimy na znak ' ' możemy przerwać dalsze poszukiwania w kolumnie, wierszu, na przekątnej. Podobnie jesli natrafimy na symbol innego gracza.

</details>

#### Krok 4
Zaimplementuj logikę gry w funkcji main.



