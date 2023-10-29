### Zadanie 1 `mytime.exe`

Utwórz strukturę `date` przechowującą: rok, miesiąc, numer dnia w miesiącu, godzinę, liczbę minut, liczbę sekund.

Funkcja `time(0)` z biblioteki <time.h> zwraca obecną datę w postaci "timestamp" (liczba sekund od 1 stycznia 1970) https://www.epochconverter.com/
Napisz funkcję `timestamptodate()` która zamieni czas w sekundach liczbę lat, miesięcy, dni ... sekund i zapisze te dane w strukturze `date`.

Napisz funkcję `datetotimestamp()` która dokona odwrotnej konwersji na podstawie przekazanej struktury `date`.

Utwórz funkcję `showtime()` przyjmującą format np. "YYYY MM DD HH:MM:SS" a nastepnie wypisującą w konsoli obecną datę w formacie zdefiniowanym przez parametr format. Obsłuż minimum możliwość zdefiniowania użytkownikowi formatu dnia, miesiąca i roku.

yy - wyświetla dwie cyfry roku np. 22
yyyy - wyświetla pełny rok np. 2022
m - wyświetla pojedynczą cyfrę oznaczającą miesiąc np. 3
mm - wyświetla dwie cyfry oznaczające miesiąc np. 03
mmm - wyśeitla 3 znaki oznaczające miesiąc np. mar
mmmm - wyświetla pełną nazwę miesiąca np. march
d - wyświetla pojedynczą cyfrę oznaczającą dzień 4
dd - wyświetla dwie cyfry oznaczające dizeń np. 04

Utwórz funkcję `printtime()` która działa podobnie jak funkcja `showtime()` z tą różnicą że nie przyjmuje parametrów lecz format jest zdefiniowany w stałej globalnej DATE_FORMAT.

Utwórz funkcję `isbetweendates()` która przyjmuje 3 daty i zwraca jeden jeśli data podana jako pierwszy argument znajduje się w okresie pomiędzy pozostałymi dwoma argumentami. 0 w przeciwnym przypakdu.


### Zadanie 2 `task2.exe`
Napisz program który poprosi użytkownika o podanie nazwy pliku do odczytania, znaku który mamy zamienić i znaku na ktróry ma zostaż zamieniony wybrany znak. Po wpisaniu program powinien wyświetlić edytowaną treść w konsoli oraz zapisać zmiany w pliku.

Program ma:
- wczytać wskazany przez użytkownika plik
- zapytać o literkę np. A
- zapytać o 2 literkę np. B
- Podmienić wszystkie wystapienia literki A w pliku na literkę B
- Wyświetlić zmieniony plik w konsoli
- Zapisać zmiany w pliku
