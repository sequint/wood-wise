//
//  getNumBoardsToPurchase.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include <stdlib.h>
#include "stdbool.h"
#include "getNumBoardsToPurchase.h"
#include "removeFromArray.h"
#include "addToArray.h"

int getNumBoardsToPurchase(int boardLengths[], int standardLength, int numBoardsInProj)
{
    int totalLengths = 0;
    
    for (int i = 0; i < numBoardsInProj; i++)
    {
        totalLengths += boardLengths[i];
    }
    
    return totalLengths / standardLength + 1;
}
