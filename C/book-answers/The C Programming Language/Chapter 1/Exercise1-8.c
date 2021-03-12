#include <stdio.h>

main ()
{
    int c, num_blanks = 0, num_tabs = 0, num_lines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ')
            ++num_blanks;
        if (c == '\t')
            ++num_tabs;
        if (c == '\n')
            ++num_lines;
    }
    printf("%d blanks, %d tabs, %d lines\n", num_blanks, num_tabs, num_lines);
}
