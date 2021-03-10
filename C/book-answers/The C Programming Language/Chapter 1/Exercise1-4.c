#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower linit of temperature tables */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower; 
    printf("Celsius\tFahreneit\n");
    printf("------- ---------\n");
    while (celsius <= upper) {
        fahr = (9.0 * celsius)/5.0 + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}



