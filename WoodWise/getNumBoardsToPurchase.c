//
//  getNumBoardsToPurchase.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

//#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"
#include "getNumBoardsToPurchase.h"
#include "removeFromArray.h"
#include "addToArray.h"

int getNumBoardsToPurchase(int boardLengths[], int standardLength, int numBoardsInProj) {
    int *remainderLengthsPtr;
    int remainderBoardsCount = 0;
    int numBoardsToPurchase = 0;
    
    remainderLengthsPtr = (int*)malloc(remainderBoardsCount * sizeof(int));
    
    for (int i = 0; i < numBoardsInProj; i++) {        
        bool remainderCaseFound = false;
        
        // If there are any remainder pieces, check if any board in it is larger than or equal the current loard length
        if (remainderBoardsCount > 0) {
            
            for (int x = 0; x < remainderBoardsCount; x++) {
                // If a remainder piece is found that is longer than current board length
                // replace the remainder piece length with the difference
                if (remainderLengthsPtr[x] > boardLengths[i]) {
                    remainderLengthsPtr[x] = remainderLengthsPtr[x] - boardLengths[i];
                    remainderCaseFound = true;
                    break;
                }
                
                // If remainder piece equals current board length
                // then create a new remainder array with that piece removed
                if (remainderLengthsPtr[x] == boardLengths[i]) {
                    remainderBoardsCount--;
                    remainderLengthsPtr = removeFromArray(remainderLengthsPtr, x, remainderBoardsCount);
                    remainderCaseFound = true;
                    break;
                }
            }
            
        }
        
        if (!remainderCaseFound) {
            // Since no remainder pieces could be used, this must be a new board that is needed
            numBoardsToPurchase++;
            
            int remainder = standardLength - boardLengths[i];
            
            if (remainder > 0) {
                remainderBoardsCount++;
                
                // Reassign remainder array pointer to new size with remainder count
                remainderLengthsPtr = realloc(remainderLengthsPtr, remainderBoardsCount * sizeof(int));
                
                // Add the new remainder value to then end of the reallocated array
                remainderLengthsPtr[remainderBoardsCount - 1] = remainder;
            }
        }
    }
    
    free(remainderLengthsPtr);
    
    return numBoardsToPurchase;
}
