// standardt libs
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// own header
#include "chartoint.h"


int CreatePlayerSelection()
{
    printf( "Please select one of the following options:\n\tp: Paper\n\ts: Scissors\n\tr: Rock\n" );

    char PlayerSelectionChar;

    scanf( "%c", &PlayerSelectionChar );

    int PlayerSelection = char2int( PlayerSelectionChar );
}


int GenerateProgramSelection()
{
    srand( time( NULL ) );      // c's randomn number generator is basically just a set of lists from which the values are read out, srand allows us to randomly select one of those lists for simulated randomness

    return rand() % 3;          // we only want numbers between 0 and 2
}


void evaluate( int PlayerSelection, int ProgramSelection )
{
    int diff = ( 3 + PlayerSelection - ProgramSelection )%3;    // will be 1, if the player won, 0 in a draw and 2 if the computer won

    if( 1 == diff )
    {
        printf( "You won!\n" );
    }
    else if( 0 == diff )
    {
        printf( "It was a draw!\n" );
    }
    else
    {
        printf( "I won!\n" );
    }
}
