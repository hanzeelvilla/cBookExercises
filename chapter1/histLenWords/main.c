#include <stdio.h>

void main() {
    int c, nc, i;
    int ndigit[10];

    nc, i = 0;
    
    for (i = 0; i < 10; ++i){
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF){
        // End of word
        if (c == ' ' || c == '\n' || c == '\t'){
            // Number of characters in the word
            if (nc > 0 && nc < 10)
                ++ndigit[nc - 1]; 
            else
                ++ndigit[9];

            // New word
            nc = 0;
        } 
        else 
            ++nc;        
    }    
    /*
    printf("Number of characters in the word:");
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }
    printf("\n");   
    */

   printf("Histogram of the length of words:\n");
   for (i = 0; i < 10; ++i) {
        if (i == 9)
            printf("10+: ");
        else
            printf("%d: ", i + 1);

        for(int j = 0; j < ndigit[i]; ++j){
            printf("*");
        }
        printf("\n");
   }
}