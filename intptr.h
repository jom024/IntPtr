#ifndef INTPTR_H_INCLUDED
#define INTPTR_H_INCLUDED

typedef struct cell {
    int data;
    struct cell* next;
} *Intptr;

void input(Intptr * L, int newRecs){
    Intptr temp, *ppn = L;
    int i, newData;

    for(i = 0; i < newRecs; i++){
        //keyboard input
        fflush(stdin);      scanf("%d", &newData);
        //initialize cell
        temp = (Intptr)malloc(sizeof(struct cell));
        if(temp != NULL){
            temp->data = newData;
            temp->next = NULL;
            //move ppn
            *ppn = temp;
            ppn = &(*ppn)->next;
        }
    }
}

Intptr removeMultiples5(Intptr* list){
    Intptr toRemove = NULL, *trav, *ppn = &toRemove,temp;

    for(trav = list; *trav!=NULL;){
        if((*trav)->data % 5 == 0){
            //remove
            temp = *trav;
            *trav = temp->next;
            //store in new list
            temp->next = NULL;
            *ppn = temp;
            ppn = &(*ppn)->next;
        } else {
            trav = &(*trav)->next;
        }
    }

    return toRemove;
}
void display(Intptr L){
    Intptr trav;

    for(trav = L; trav!=NULL; trav = trav->next){
        printf("%d ", trav->data);
    }

    if(L==NULL){
        printf("NaN");
    }
}

#endif