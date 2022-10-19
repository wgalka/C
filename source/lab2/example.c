#include<stdio.h>

int main(int argc, char const *argv[])
{
    // printf("Wrpowadź liczbę a:");
    // int a;
    // scanf("%i",&a);
    // printf("Wrpowadź liczbę b:");
    // int b;
    // scanf("%i",&b);
    // a +=b;
    // printf("suma liczb %i", a);

    int a = 10;
    if(a%2 == 0){

    }

    char znak =' ';
    scanf_s("%c", &znak);

    switch (znak)
    {
    case '+':
        printf("wybrałeś dodawanie");
        break;

    case '-':
        printf("wybrałeś odejmowanie");
        break;
    
    default:
        printf("default");
        break;
    }

    return 0;
}
