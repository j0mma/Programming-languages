#include <stdio.h>

float convert(int f);

main()
{
    int i;
    for (i = 0; i <= 300; i += 20)
        printf("%3d %6.1f\n", i, convert(i));
    return 0;
}

/* convert from fahrenheit to celsius */
float convert(int fahr)
{
    float celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}
    
