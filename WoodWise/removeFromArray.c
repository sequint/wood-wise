//
//  removeFromArray.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "removeFromArray.h"

int* removeFromArray(int array[], int indexToRemove, int ARRAY_SIZE) {
    int newArray[ARRAY_SIZE];
    int *newArrPtr = newArray;
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i != indexToRemove) {
            newArray[i] = array[i];
        }
    }
    
    return newArrPtr;
}
