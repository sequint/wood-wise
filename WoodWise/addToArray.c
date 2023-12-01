//
//  addToArray.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include <stdlib.h>
#include "addToArray.h"

void addToArray(int *arrayPtr, int NEW_ARRAY_SIZE, int numToAdd)
{
    // Reassign remainder array pointer to new size with remainder count
    arrayPtr = realloc(arrayPtr, NEW_ARRAY_SIZE * sizeof(int));
    
    // Add the new remainder value to then end of the reallocated array
    arrayPtr[NEW_ARRAY_SIZE - 1] = numToAdd;
}
