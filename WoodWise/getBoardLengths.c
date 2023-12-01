//
//  getBoardLengths.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "getBoardLengths.h"

int* getBoardLengths(int boardLengths[], int numBoards)
{
    for (int i = 0; i < numBoards; i++) {
        printf("Enter length of board #");
        printf("%d", i + 1);
        printf(": ");
        scanf("%d", &boardLengths[i]);
    }
    
    return boardLengths;
}
