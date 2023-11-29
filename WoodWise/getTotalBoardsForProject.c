//
//  getTotalBoardsForProject.c
//  WoodWise
//
//  Created by Steven Quintana on 11/29/23.
//

#include "getTotalBoardsForProject.h"

int getTotalBoardsForProject(void) {
    int boardsInProject;
    
    printf("Enter total amount of wood boards included in the project: ");
    scanf("%d", &boardsInProject);
    
    return boardsInProject;
}
