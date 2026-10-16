//own headers
#include "game.h"


int main()
{
    int PlayerSelection = CreatePlayerSelection();
    int ProgramSelection = GenerateProgramSelection();

    evaluate( PlayerSelection, ProgramSelection );

    return 0;
}
