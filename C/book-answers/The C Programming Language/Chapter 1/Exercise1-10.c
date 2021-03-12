#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');  /* prints a backslash */
            putchar('t');   /* prints the character 't' */
            c = '\b';       /* Replaces the original tab character */
        }
        if (c == '\b')
            printf("\\b");  /* prints "\b" */
        if (c == '\\')
            printf("\\");   /* prints a double backslash "\\" */
        putchar(c);
    }
}

