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



int main(int argc, const char * argv[]) {
    int standardBoardLength = getStandardBoardLength();
    int boardsInProject = getTotalBoardsForProject();
    printf("%d", boardsInProject);
    // Get the length of each piece
    // Calculate number of boards needed to be purchased
    
    // Print new lines to seperate project output from exit code output
    printf("\n\n");
    
    return 0;
}
