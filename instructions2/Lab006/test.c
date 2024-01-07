#include <stdio.h>

struct month
{
    unsigned int numberOfDays;
    char name[4];
};
int main(int argc, char **argv)
{

    // deklaracja

    struct month aMonth;

    // definicja

    aMonth.numberOfDays = 31;

    aMonth.name[0] = 'J';

    aMonth.name[1] = 'a';

    aMonth.name[2] = 'n';
    aMonth.name[3] = 'n';

    // definicja i deklaracja jednoczesnie

    struct month bMonth = {21, {'F', 'e', 'b'}};

    printf("%s has %u days. \n", aMonth.name, aMonth.numberOfDays);

    printf("%s has %u days. \n", bMonth.name, bMonth.numberOfDays);

    return 0;
}