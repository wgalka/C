#include <stdio.h>
#include <limits.h>

int main(){
    short var0; // liczba całkowita 
    unsigned short var1; //liczba całkowita nieujemna
    
    int var2; // typ prosty całkowity. W nowoczesnych systemach ma 32 bity, tyle co long.
    unsigned int var3; 

    long var4; // Można zapisać jako long int
    unsigned long var5; 

    long long var6; // Przechowuje liczby większe niż long
    long long var7;

    float var8;
    double var9;
    long double var10;

    char var11;
    unsigned char var12;

    printf("short var0. MinVal=%hi MaxVal=%hi Bits=%d\n",SHRT_MIN, SHRT_MAX, sizeof(var0)*CHAR_BIT);
    printf("unsigned short var1. MinVal=0 MaxVal=%hi Bits=%d\n", USHRT_MAX, sizeof(var1)*CHAR_BIT);

    printf("int var2. MinVal=%hi MaxVal=%hi Bits=%d\n",SHRT_MIN, SHRT_MAX, sizeof(var2)*CHAR_BIT);
    printf("unsigned var3. MinVal=0 MaxVal=%hi Bits=%d\n", USHRT_MAX, sizeof(var3) * CHAR_BIT);
}