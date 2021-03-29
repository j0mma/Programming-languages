#include <stdio.h>

#define NUMBER_OF_LETTERS 26
main()
{
    int c, i, nblanks = 0, nother = 0;
    int nletters[26];

    for (i = 0; i < 26; ++i)
        nletters[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ++nletters[c - 'a'];
        else if (c >= 'A' && c <= 'Z')
            ++nletters[c - 'A'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nblanks;
        else
            ++nother;
    }
   
    /* printing the histogram */
    printf(" ======================\n");
    printf("| FREQUENCY OF LETTERS |\n");
    printf(" ======================\n\n");

    for (i = 0; i < NUMBER_OF_LETTERS; ++i) {
        if (nletters[i] != 0) { 
            printf("%c|", 'A' + i ); /* printing only letter present in text */
            while(nletters[i] != 0) { /* printing * for each time a specific letter is present */
                printf("* ");
                --nletters[i]; 
            }
            printf("\n");
        }
    }
    printf("----------------------------------------------------\n\n");
    /* printing the number of non alphabetical characters */
    printf("Blanks: %d\n", nblanks);
    printf("Other: %d\n", nother);
}
