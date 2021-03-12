#include <stdio.h>

main()
{
    int c, num_blanks;
    num_blanks = 0;         /* to count number of blanks in line */
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++num_blanks;   /* increment counter when blanks encountered */
        
        while (num_blanks > 1) {
            putchar('\b');  /* delete blanks with backspace when lanks are more than one */
            --num_blanks;
        }

        if (c == '\n') 
            num_blanks = 0; /* reset blanks counter for new line of text */

        putchar(c);
    }
}
