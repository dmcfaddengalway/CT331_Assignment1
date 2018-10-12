#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"

int length() {
    genericLinkedList *currEle = list;
    int counter = 0;
    
    while(currEle != NULL) {
        counter++;
        currEle = currEle->next;
    }
    
    return printf("# of elements in the list: %d \n", counter);
}

void push() {
    genericLinkedElement *newEle = createEL(data, size, printFunc);
    newEle->next = *list;
    *list = newEle;
}

genericListElement *createEl(void *data, size_t size, printSomething printFunc){
    genericListElement* e = malloc(sizeof(genericListElement));
    if(e == NULL){
        //malloc has had an error
        return NULL; //return NULL to indicate an error.
    }
    void *dataPointer = malloc(size);
    if(dataPointer == NULL){
        //malloc has had an error
        free(e); //release the previously allocated memory
        return NULL; //return NULL to indicate an error.
    }
    memmove(dataPointer, data, size);
    e->data = dataPointer;
    e->size = size;
    e->print = printFunc; //dumb moment - don't forget
    e->next = NULL;
    return e;
}
