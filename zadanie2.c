// Napisz program który:
// Prosi użytkownika o podanie cyfry
// Sprawdza czy cyfra jest nieparzysta
//     Jeśli cyfra jest Parzysta program prosi użytkownika o podanie cyfry aż w końcu otrzyma poprawną wartość.
// Jeśli cyfra jest poprawna wypisuje w konsoli znak X złożony ze znaków X

// Przykładowe wyjście programu
// Wprowadz liczbe: 2
// Wprowadz liczbe nieparzysta!
// Wprowadz liczbe: 5
// X   X
//  X X
//   X
//  X X
// X   X



int myprintf(char tab[]){
    for(int i=0;tab[i] != 0;i++){
        printf("%c", tab[i]);
    }
}

int myprintf(char * tab){
    for(int i=0;tab[i] != 0;i++){
        printf("%c", tab[i]);
    }
}

int myprintf(char * tab){
    for(char *i = tab;*i;i++){
        printf("%c", *i);
    }
}

int main(){

    char tab[] = "abc\0";
    return 0;
}