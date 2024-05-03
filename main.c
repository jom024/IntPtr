#include <stdio.h>
#include <stdlib.h>
#include "intptr.h"

int main(void){
    Intptr list = NULL;
    int numRecs;

    printf("How many records to add? ");
    scanf("%d", &numRecs);

    input(&list, numRecs);


    printf("\n\n%-25s", "Original list : ");
    display(list);

    Intptr removed = removeMultiples5(&list);
    printf("\n%-25s", "Current list : ");
    display(list);
    printf("\n%-25s", "Removed data : ");
    display(removed);

    return EXIT_SUCCESS;
}