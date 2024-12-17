#include <stdio.h>

void main()
{
    int c, lastc;

    lastc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (lastc != ' ') {
                putchar(c);
            }
        }
        else{
            putchar(c);
        }

        lastc = c;
    }   
}