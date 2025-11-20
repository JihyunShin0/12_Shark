#include <stdio.h>
#include <stdlib.h>

#include <time.h>

#include "board.h"

#define MAX_DIE     6

int rolldie(void)
{
    return rand()%MAX_DIE+1;
}

int main(int argc, char *argv[])
{
    srand( (unsigned) time(NULL) );
    
    //opening
    printf("======================================================\n");
    printf("                                                      \n");
    printf("               < SHARK ISLAND GAME >                  \n");
    printf("                                                      \n");
    printf("======================================================\n\n\n");
    
    //step 1. initialization (player name setting, variables)
    
    //step 2. turn play (do-while)
    // 2-1. status printing
    // 2-2. roll die
    // 2-3. mobe (result)
    // 2-4. change turn, shark move
    
    
    //step 3. game end (winner printing)
    
    
    //ending
    printf("\n\n\n\n\n");
    printf("======================================================\n");
    printf("                   ^^^^^^^^^^^^^^                     \n");
    printf("                 < CONGRATULATION >                   \n");
    printf("                   vvvvvvvvvvvvvv                     \n");
    printf("                 YOU WIN!!!!!!!!!!!                   \n");
    printf("======================================================\n\n\n");
    
    system("PAUSE");	
    return 0;
}
