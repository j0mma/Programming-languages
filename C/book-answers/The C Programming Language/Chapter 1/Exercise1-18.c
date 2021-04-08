#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
void removeTrailingBlanks(char line[], int len);

/* print longest input line */
main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0) { 
       removeTrailingBlanks(line, len);
       printf("%s", line);
    }
    return 0;
}

/* getline: read a line into s, return length of line */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
        s[i] = c;
    if (c == '\n') { 
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; 
    return i;
}

/* removeTrailingBlanks: remove trailing blanks space to the right */
void removeTrailingBlanks(char line[], int len)
{
    int i;
    for(i = len - 2; line[i] == ' ' || line[i] == '\t'; --i) 
        line[i] = '\b';
}
