#include <stdio.h>
#include "week1-2.h"
int yourNumber = 0;

int main(void) {
    printf("Mag ik jouw nummer? \n");
    scanf("%d", &yourNumber);
    if (yourNumber < 0)
        return 0;
    if (yourNumber == 1) {
        char h = 'h';
        print_function(h);
    }
    if (yourNumber == 2) {
        printf("actie: 2 bananen voor de prijs van 3!");
    }
    return 0;
}

// gcc -I week1-2.h week1-3.c -o main