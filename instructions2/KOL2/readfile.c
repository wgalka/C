#include <stdio.h>

int main() {
    // Otwórz plik do odczytu
    FILE *file = fopen("example.csv", "r");

    // Sprawdź, czy plik został poprawnie otwarty
    if (file == NULL) {
        perror("Nie można otworzyć pliku");
        return 1; // Zakończ program z błędem
    }
    // Wczytuj dane z pliku
    char buffer[1500]; // Tablica w której będzie pchechowywana jedna linia z pliku tekstowego (buffor)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {// dopóki nie natrafimy na znak pusty
        printf("%s", buffer); // wypisz dane wczytane do zmiennej buffer
    }
    // Zamknij plik po zakończeniu operacji
    fclose(file);

    return 0; // Zakończ program bez błędu
}