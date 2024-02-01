Pliki *CSV* (Comma-Separated Values) to format przechowywania danych, w którym zazwyczaj pierwsza linia zawiera nazwy kolumn gdzie wartości są oddzielone `,`:

<div class="codeblock-label">example.csv</div>
```yaml
kolumna A, Kolumna B, Kolumna C, Kolumna D
```
Kolejne linie w pliku *CSV* 

 Jednak pliki CSV mogą również używać innych separatorów, takich jak średnik (';') lub tabulator ('\t'). Typowy plik CSV składa się z rekordów, a każdy rekord zawiera pola oddzielone separatorem, najczęściej jest to znak `,` jednak możliwe jest też użycie np. `;`,`|` lub `\t`.

- Separatory: Oprócz przecinka, mogą używać innych separatorów, takich jak średnik czy tabulator, w zależności od wymagań lub standardów.

- Nagłówek: Plik CSV może zawierać nagłówek, który definiuje nazwy kolumn. Nagłówek jest zazwyczaj pierwszym wierszem pliku i pomaga zrozumieć, co znajduje się w poszczególnych kolumnach.

# DST

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

# DB

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

# BDB

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