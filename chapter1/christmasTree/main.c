#include <stdio.h>
#define HEIGHT 5

void main(){
    int spaces, ast;

    spaces = HEIGHT - 1;
    ast = 1;

    for (int i = 0; i < HEIGHT; ++i){
        for (int j = 0; j < spaces; ++j)
            printf(" ");
        
        for (int j = 0; j < ast; ++j)
            printf("*");
        
        printf("\n");
        --spaces;
        ast += 2;
    }

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < HEIGHT - 1; ++j)
            printf(" ");
        printf("|\n");
    }

    printf("    Puto el que lo leea\n");
}