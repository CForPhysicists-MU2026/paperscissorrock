//standardt libs
#include <stdio.h>


// a function that translates chars to integers, where p => 1, s => 2 and r => 3
int char2int( char c )
{
    switch( c )
    {
        case 'p':
            return 1;
        case 's':
            return 2;
        case 'r':
            return 3;
        default:
            printf( "Invalid input!\n" );
            return 0;
    }
}

