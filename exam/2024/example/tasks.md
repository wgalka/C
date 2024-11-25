# Kolokwium C

## Zadanie 1

Napisz funkcję która sprawdza czy łańcuch znaków przekazany jako argument funkcji to palindrom. Funkcja zwraca `1` jeśli zadany łańcuch znaków jest palindromem, `0` jeśli łańcuch znaków nie jest palindromem.

Zademonstruj działanie wykonanej funkcji przez stworzenie programu który wczytuje od użytkownika maksymalnie 100 znaków. Następnie program wykorzystuje stworzoną funkcję by sprawdzić czy wpisany przez użytkownika łańcuch znaków to palindrom. Jeśli tak program wypisuje w konsoli napis "Palindrom" w przeciwnym wypadku "Nie palindrom".

*W wyniku działania programu tablica wejściowa nie może ulec zmianom.

## Zadanie 2

Zdefiniuj strukturę o nazwie Student, która będzie przechowywała następujące dane:
- id (liczba całkowita) – unikalny numer identyfikacyjny studenta,
- name (tablica znaków o długości 50) – imię i nazwisko studenta,
- grades (tablica 5 liczb zmiennoprzecinkowych) – oceny studenta z 5 przedmiotów,
- average (liczba zmiennoprzecinkowa) – średnia ocen studenta.

Utwórz funkcję void calculateAverage(struct Student *student), która obliczy średnią ocen dla danego studenta i zapisze wynik w polu average.

Napisz program, który:
- Wczyta dane dla 3 studentów od użytkownika (w tym ich oceny),
- Obliczy średnie oceny dla każdego studenta za pomocą funkcji calculateAverage,
- Wyświetli dane wszystkich studentów w formacie tabeli, prezentując ich id, name, oceny oraz obliczoną średnią.

### Zadanie 3

Stwórz strukturę `Matrix` która przechowuje:
- wskaźnik na tablicę dwuwymiarową
- liczbę kolumn
- liczbę wierszy
- wskaźnik na najmniejszy element
- wskaźnik na największy element

Utwórz tablicę `tab1` przechowującą następujące dane(bez nazw kolumn):

| Kolumna 1 | Kolumna 2 | Kolumna 3 |
|-----------|-----------|-----------|
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |

Utwórz funkcję `initializeMatrix` która przyjmuje: 
- wskaźnik na tablicę dwurymiarową, 
- liczbę kolumn, 
- liczbę wierszy 

Funkcja zwraca strukturę `Matrix` z uzupełnionymi wartościami:
- wskaźnik na tablicę dwuwymiarową
- liczbę kolumn
- liczbę wierszy
- wskaźnik na najmniejszy element
- wskaźnik na największy element

Wypisz wartości najmniejszego oraz największego elementu używając wskaźników ze struktury.