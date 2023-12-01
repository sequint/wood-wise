//
//  removeFromArray.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include <stdlib.h>
#include "removeFromArray.h"

void removeFromArray(int *arrayPtr, int indexToRemove, int NEW_ARRAY_SIZE) {
    // Starting at the index after the index to remove shift elements left
    for (int i = indexToRemove; i < NEW_ARRAY_SIZE; i++) {
        arrayPtr[i] = arrayPtr[i + 1];
    }
    
    // Delete trailing element by reallocated to the new size
    arrayPtr = realloc(arrayPtr, NEW_ARRAY_SIZE * sizeof(int));
}
