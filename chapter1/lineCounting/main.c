#include <stdio.h>

void main()
{
    int c, nl;
    nl = 0;

    printf("Enter text: \n");
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }

    printf("Lines: %d\n", nl);
}