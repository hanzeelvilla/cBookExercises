#include <stdio.h>

#define LOWER 0 // min temp
#define UPPER 300 // max temp
#define STEP 20 // increment

void main()
{
    float c = LOWER;
    float f;

    while(c < UPPER) {
        f = c * (9/5) + 32;
        printf("C: %6.2f°\tf: %6.2f°\n", c, f);
        c += STEP;
    }

    // It can be done with a for loop to
    /*
    for(c; c < UPPER; c += STEP) {
        f = c * (9/5) + 32;
        printf("C: %6.2f°\tf: %6.2f°\n", c, f);
    }
    */
}