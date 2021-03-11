#include <stdio.h>

main()
{
    int c = getchar();
    
    /* The EOF character is CTRL + D or ^D */

    while (c != EOF) {
        printf("getchar() != EOF = 1\n"); /* Any character input except EOF will set the expression to 1 */
        c = getchar();
    }
    printf("getchar() != EOF = 0\n");    /* EOF input will set the expression to 0 */
}

