#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
void removeBlanks(char to[], char from[]);

/* print longest input line */
main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */
    char newline[MAXLINE];  /* longest line saved here */

    while ((len = getLine(line, MAXLINE)) > 0) { /* while the input is not empty */
       removeBlanks(newline, line);
       printf("%d, %s", len, newline);
    }
    return 0;
}

/* getline: read a line into s, return length of line */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) /* insert character only if those 3 conditions are met before */
        s[i] = c;
    if (c == '\n') { /* when newline encountered */
            s[i] = c;
            ++i;
    }
    s[i] = '\0'; /* add null character to the array */
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void removeBlanks(char to[], char from[])
{
    int i = 0, blanks = 0, idx = 0;
    while ((to[i] = from[i]) != '\0') {
        if (from[i] == ' ' || from[i] == '\t'){
            to[i] = '*';
            ++blanks;
        }
        ++i;
    }
    //for (i = blanks; to[i] !=;)
}
