#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define RANDOM_CAPITALIZE(ch) ((rand() % 2 == 0) ? toupper(ch) : tolower(ch))

int main() {
    // Seed the random number generator only once
    srand(time(NULL));

    int c;
    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            c = RANDOM_CAPITALIZE(c);
        }
        putchar(c);
    }

    return 0;
}

