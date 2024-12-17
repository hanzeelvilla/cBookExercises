#include <stdio.h>

void main()
{
    long nc = 0;

    printf("Enter some text and press Ctrl+D to count the characters:\n");
    while (getchar() != EOF)
        ++nc;
    
    printf("\nCharacters: %ld\n", nc);
}