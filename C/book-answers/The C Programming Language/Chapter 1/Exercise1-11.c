#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c, num_char, num_words, num_lines, state;
    num_lines = num_words = num_char = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        ++num_char;
        if (c == '\n')
            ++num_lines;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++num_words;
        }
    }

    printf("%d %d %d\n", num_char, num_words, num_lines);
}
