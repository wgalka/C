#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacciRecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
    }
}

int fibonacciIteration(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main()
{
    clock_t start, end;
    start = clock();
    printf("%i", fibonacciRecursion(45));
    end = clock();

    printf("czas wykonania: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
}