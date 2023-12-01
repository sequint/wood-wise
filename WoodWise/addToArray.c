//
//  addToArray.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "addToArray.h"

int* addToArray(int oldArray[], int newArray[], int ARRAY_SIZE, int numToAdd) {
    // Copy existing array and add num to extra allocation of memory
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i == ARRAY_SIZE - 1) {
            newArray[i] = numToAdd;
        }
        else {
            newArray[i] = oldArray[i];
        }
    }
    
    return newArray;
}
