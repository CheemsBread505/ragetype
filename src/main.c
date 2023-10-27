// includes simple libraries
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main() {
    // Random number generator
    srand(time(NULL));

    int c;
    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            // Randomly capitalize the characters
            if (rand() % 2 == 0) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
        putchar(c);
    }

    return 0;
}
