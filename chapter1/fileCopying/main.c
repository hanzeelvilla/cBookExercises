#include <stdio.h>

void main()
{
    int c;

    printf("Enter some text, then press Ctrl+D to end the program:\n");
    while((c = getchar()) != EOF)
        putchar(c);

    printf("EOF: %d\n", EOF);  
}