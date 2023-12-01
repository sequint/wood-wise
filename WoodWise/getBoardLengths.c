//
//  getBoardLengths.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "getBoardLengths.h"

int* getBoardLengths(int boardLengths[], int numBoards, int maxLength)
{
    for (int i = 0; i < numBoards; i++)
    {
        int tempInput;
        
        printf("Enter length of board #");
        printf("%d", i + 1);
        printf(": ");
        scanf("%d", &tempInput);
        
        while (tempInput > maxLength)
        {
            printf("Input length cannot be greater the the standard board size.\n");
            printf("Please re-enter the length of board #");
            printf("%d", i + 1);
            printf(": ");
            scanf("%d", &tempInput);
        }
        
        // If the length entered is less than the max length, assign it to the array
        boardLengths[i] = tempInput;
    }
    
    return boardLengths;
}
