#include <stdio.h>

int ctr;

int main( void )
{
    char star = '*';
    char dash = '-';
    for (int i = 0; i < 10 ; i++) {
            print_function( star );
            print_function( dash );
            printf("\n");
    }
    return 0;
}

void print_function ( char letter )
{
    for ( ctr = 0; ctr < 9; ctr++)
    {
        printf("%c", letter);
    }
}

// 2a: Dit wordt geprint in de terminal: *********---------

// 2b: for loop in main aangepast