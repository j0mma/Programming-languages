#include <stdio.h>

#define MAX_LENGTH  20  /* The maximum amount of words per input */
#define MAX_CHAR    15  /* The maximum amount of characters per word */
#define IN  1
#define OUT 0

main()
{
    int idx, j, input_char, num_char = 0, num_words = 0, state; 
    int words[MAX_LENGTH]; /* Store the number of character for each word in the input */

    state = IN; /* Set the word counter to be initially in a word */
    
    /* Initializing all values in the array to 0 */
    for (idx = 0; idx < MAX_LENGTH; ++idx) {
        words[idx] = 0; 
    }

    /* 1st part: Retrieving the input text */
    while((input_char = getchar()) != EOF) {
        ++num_char;                     /* Counts every characters typed in */

        if  (input_char == ' ' || input_char == '\t' || input_char == '\n') {
            state = OUT;                 
            --num_char;                  /* Remove blanks characters in the character count */
            words[num_words] = num_char; /* Assign to each word it's amount of characters */
            num_char = 0;                /* Reset the num of characters for next word */
        }
        else if (state == OUT) {
            state = IN;
            ++num_words; 
        }
    }
    
    /* 2nd part: Printing the histogram */
    printf("========================================\n");
    printf(" Histogram of the length of each words\n");
    printf("========================================\n");

    int last_word = 0;
    for (idx = 0; idx < MAX_LENGTH; ++idx) {
        if (words[idx] != 0)
            last_word = idx; /* index of last word in the array */
        }
        
    for (j = MAX_CHAR; j >= 1; --j) {
        
        printf("%2d|", j); /* printing the vertical legend: Number of characters */
        for (idx = 0; idx <= last_word; ++idx) {
            if (words[idx] == j) { 
                    printf("* ");
                }
            } 
                printf("\n");
        } 
    printf("   -----------------------------------\n");
    printf("   ");
    /* printing the horizontal legend: Number of words */
    for (int i = 1; i <= 15; ++i)
        printf("%d ", i);
    printf("\n");

}
