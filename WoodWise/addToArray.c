//
//  addToArray.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "addToArray.h"

int* addToArray(int array[], int num, int ARRAY_SIZE) {
    int newArray[ARRAY_SIZE];
    int *newArrPtr = newArray;
    
    // Copy existing array and add num to extra allocation of memory
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i == ARRAY_SIZE - 1) {
            newArray[i] = num;
        }
        else {
            newArray[i] = array[i];
        }
    }
    
    return newArrPtr;
}
