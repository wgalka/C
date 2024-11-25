#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
    int tab[] = {54, 5, 2, 5, 9, 3};
    int n = sizeof(tab) / sizeof(int);
    
    int pivot = n / 2;
    bool isEven = n % 2 == 0;
    printf("Pivot: %d, Is even: %d\n", pivot, isEven);

    // Poniższy kod można zrealizować w wydajniejszy sposób wykorzystując wskaźniki lecz na tym etapie może być niezrozumiały
    int curent_ranking = 1;
    int tab_min; // przechowywanie najmniejszej wartości
    int tab_min_index; // przechowywanie indeksu najmniejszej liczby
    size_t tab_argsort[sizeof(tab) / sizeof(int)] = {0}; // inicjalizuje tablice na przechowanie "rankingu" elementów tablicy.


    for (int j = 0; j < n; j++) { // Tutaj nie musimy znajdować całego rankingu wystarczy nam pozycja 3 i 4 a więc można ograniczyć pętlę do 4 wykonań.
        tab_min = INT_MAX; // Ustawienie `tab_min` na bardzo dużą wartość na początku każdej iteracji.
        tab_min_index = -1;

        for (size_t i = 0; i < n; i++) {
            // Znajdź minimalny element, który jeszcze nie jest oceniony (`tab_argsort[i] == 0`).
            if (tab[i] < tab_min && tab_argsort[i] == 0) {
                tab_min = tab[i];
                tab_min_index = i;
            }
        }
        
        // Przydzielenie "rankingu" dla najmniejszego znalezionego elementu.
        if (tab_min_index != -1) {
            tab_argsort[tab_min_index] = curent_ranking;
            curent_ranking++;
        }
    }

    // Wydrukowanie wyników.
    printf("Ranking indeksów: ");
    for (size_t i = 0; i < n; i++) {
        printf("%zu ", tab_argsort[i]);
    }
    printf("\n");

    // chcąc obliczyć medianę musimy znaleźć 3 i 4 w rankingu i odczytać w oryginajnej tablicy ich wartość.
    float median;
    if (isEven) {
        // W przypadku liczby parzystej
        int first_median_index = pivot - 1; // Indeks pierwszej mediany
        int second_median_index = pivot; // Indeks drugiej mediany
        float first_median_value = 0, second_median_value = 0;

        for (size_t i = 0; i < n; i++) {
            if (tab_argsort[i] == first_median_index + 1) { // +1 bo rankingi zaczynają się od 1
                first_median_value = (float)tab[i];
            }
            if (tab_argsort[i] == second_median_index + 1) {
                second_median_value = (float)tab[i];
            }
        }
        
        median = (first_median_value + second_median_value) / 2; // Obliczamy medianę
    } else {
        // W przypadku liczby nieparzystej
        int median_index = pivot - 1; // Indeks mediany

        for (size_t i = 0; i < n; i++) {
            if (tab_argsort[i] == median_index + 1) {
                median = (float)tab[i];
                break;
            }
        }
    }
    printf("madiana: %.1f", median);

    return 0;
}
