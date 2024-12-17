#include <stdio.h>

void main() {
    int c, nb, nt, nl;
    nb = nt = nl = 0;
    
    printf("Enter some text and press Ctrl+D to end the input\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nl;
        }
    }

    printf("Blanks: %d\nTabs: %d\nNew lines: %d\n", nb, nt, nl);
}