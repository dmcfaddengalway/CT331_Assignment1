#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"

int length(genericListElement *list) {
    
    genericLinkedList *currEle = list;
    int counter = 0;
    
    while(currEle != NULL) {
        counter++;
        currEle = currEle->next;
    }
    
    return printf("# of elements in the list: %d \n", counter);
    
}

void push(genericListElement **list, void *data, size_t size, printer printFunc) {
    
    genericLinkedElement *newEle = createEL(data, size, printFunc);
    
    newEle->next = *list;
    
    *list = newEle;
    
}

genericListElement *createEl(void *data, size_t size, printSomething printFunc){
    
    genericListElement* ele = malloc(sizeof(genericListElement));
    
    //Error in malloc
    if(ele == NULL) {
        return NULL;
    }
    
    void *dataPointer = malloc(size);
    
    //Error in malloc, free up the space
    if(dataPointer == NULL) {
        free(e);
        return NULL;
    }
    
    memmove(dataPointer, data, size);
    
    ele->data = dataPointer;
    ele->size = size;
    ele->print = printFunc;
    ele->next = NULL;
    
    return e;
    
}
