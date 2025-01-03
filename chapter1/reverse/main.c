#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char s[], int size);

void main()
{
    char line[MAXLINE];
    int len;

    while ((len = getLine(line, MAXLINE)) > 0) { // while there is a line to read
        reverse(line, len);
        printf("%s", line);
    }
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i; // return the length of the line
}

void reverse(char s[], int size)
{
    int i, j;
    char temp;

    for (i = 0, j = size - 2; i < j; ++i, --j) { // -2 to avoid the newline character
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}