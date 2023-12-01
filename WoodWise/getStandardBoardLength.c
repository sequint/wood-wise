//
//  getStandardBoardLength.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "getStandardBoardLength.h"

int getStandardBoardLength(void)
{
    int boardLength;
    
    printf("Enter board length sold at the store: ");
    scanf("%d", &boardLength);
    
    return boardLength;
}
