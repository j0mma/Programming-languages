#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c, state;
    state = IN;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            printf("\n");
        }
        putchar(c);
    }
}



