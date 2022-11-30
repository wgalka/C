#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <strings.h>
#include <stdbool.h>


int asd(int a){
    return a+5;
}

void asdf(int *wsk){
    *wsk = 128;
};

struct prostokat
{
    int a;
    int b;
};

int asdh(struct prostokat a){
    return a.a * a.b;
};

int main(int argc, char const *argv[])
{

    struct prostokat tab43[10];

    int x =0;
    while (x<10)
    {
        tab43[x].a = 2;
        tab43[x].b = 4;
        x++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", asdh(tab43[i]));
    }
    


    int x =5;
    asd(x);
    printf("x= %i", x);

    asdf(&x);
    printf("x= %i", x);
    char c = 'f';
    char d = 123;
    char x1 = 128;

    unsigned char a = 0;
    unsigned int x75 = 0;

    bool x2 = true;

    float x3 = 543.543;
    double x5 = 423.453;

    printf("%d", UCHAR_MAX);

    printf("%c %hhi", c, c);

    printf("%f");
    printf("%lf");
    printf("%i", sizeof(x));


    // scanf("%d", &x);


    char f[6]= "asdff";

    if(1 <=5 && (5-4)< 4){
        printf("asd");
    }
    
    int as = 0;
    printf("as = %d\n", as++);
    printf("as = %d\n", ++as);


    for(int i = 0;i<6;i++){
        printf("%c ",f[i]);
    }

    int tab1[3][4][2];
    printf("%p", tab1);
    int i = 0;
    int j = 0;
    int k = 0;
    while (k < 2)
    {
        while (i < 3)
        {
            while (j < 4)
            {
                tab1[i][j][k] = 1;
                j++;
            }
            
            i++;
        }
        k++;
    }
    
    
    int *wsk;
    int abc =6;
    printf("%p\n",&abc);

    wsk = &abc;

    *wsk = 85;

    printf("%d\n", abc);

    char empty = '\0';
    char str[5] = "abcd";
    char str2[5] = "ABCD";
    printf("|%s|\n", str);
    printf("|%s|\n", str2);


    
    /* code */
    return 0;
}
