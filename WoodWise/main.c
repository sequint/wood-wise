//
//  main.c
//  WoodWise
//
//  Created by Steven Quintana on 11/20/23.
//  Description: A C console application that calculate the least amount of wood boards you need to purchase for a project.
//  The project assumes a fixed thinkness and width to the wood (i.e. 1 inch thick and 1 ft. wide) and treats the length as
//  the only variable.
//

#include <stdio.h>
#include "getStandardBoardLength.h"
#include "getTotalBoardsForProject.h"
#include "getBoardLengths.h"
#include "getNumBoardsToPurchase.h"



int main(int argc, const char * argv[]) {
    int standardBoardLength = getStandardBoardLength();
    
    int boardsInProject = getTotalBoardsForProject();
    
    int projectBoardLengths[boardsInProject];
    int *boardLengthsPointer = getBoardLengths(projectBoardLengths, boardsInProject);
    
    int numBoardsToPurchase = getNumBoardsToPurchase(boardLengthsPointer, standardBoardLength, boardsInProject);
//    
    printf("Boards you need to purchase: ");
    printf("%d", numBoardsToPurchase);
    
    // Print new lines to seperate project output from exit code output
    printf("\n\n");
    
    return 0;
}
