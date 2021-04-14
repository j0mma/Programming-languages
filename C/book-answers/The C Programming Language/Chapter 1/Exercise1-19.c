#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
void copy(char from[], char to[])
void reverse(char s[]);

/* print longest input line */
main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0) { 
       reverse(line);
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

/* copy: save the line in a different array */
void copy(char from[], char to[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

/* removeTrailingBlanks: remove trailing blanks space to the right */
void reverse(char s[])
{
    int i = 0;
    
        
}

