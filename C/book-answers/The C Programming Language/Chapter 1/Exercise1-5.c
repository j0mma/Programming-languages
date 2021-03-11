#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 300, ... 0 */
main()
{
    int fahr;

    printf("Fahreneit Celsius\n");
    printf("--------- -------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%d\t%8.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}



