#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"

genericListElement *createEl(void *info, size_t size, printer printFunc) {
    
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
    
    memmove(dataPointer, info, size);
    
    ele->info = dataPointer;
    ele->size = size;
    ele->print = printFunc;
    ele->next = NULL;
    
    return e;
    
}

int length(genericListElement *list) {
    
    genericLinkedList *currEle = list;
    int counter = 0;
    
    while(currEle != NULL) {
        counter++;
        currEle = currEle-> next;
    }
    
    return printf("# of elements in the list: %d \n", counter);
    
}

void push(genericListElement **list, void *info, size_t size, printer printFunc) {
    
    genericLinkedElement *newEle = createEL(info, size, printFunc);
    
    newEle-> next = *list;
    
    *list = newEle;
    
}

genericListElement *pop(genericListElement **list) {
    genericListElement *headEle = *list;
    
    if(head) {
        *list = headEle-> next;
    }
    
    return head;
}

void enqueue(genericListElement **list, void *info, size_t size, printer printFunc) {
    genericListElement *newEle = createEL(data, size, printFunc);
    
    newEle-> next = *list;
    
    *list = newEle;
}

genericListElement *dequeue(genericListElement *list) {
    genericListElement *temp = list;
    
    while((temp-> next)-> next != NULL) {
        temp = temp-> next;
    }
    
    genericListElement *tailEle = temp-> next;
    temp->next = NULL;
    
    return tailEle;
    
}

void traverse(genericListElement *beginning) {
    genericListElement *currEle = beginning;
    
    while(currEle != NULL) {
        currEle-> printFunc(currEle-> data);
        currEle = currEle-> next;
    }
    
}

genericListElement* insertAfter(genericListElement* ele, void *info, size_t size, printer printFunc) {
    
    genericListElement* newEle = createEl(info, size, printFunc);
    
    genericListElement* nextEle = ele-> next;
    
    newEle-> next = next;
    ele-> next = newEle;
    
    return newEle;
    
}

void deleteAfter(genericListElement* afterEle) {
    genericListElement* deleteEle = afterEle-> next;
    genericListElement* newNextEle = deleteEle-> next;
    afterEle-> next = newNextEle;
    
    free(deleteEle->info);
    free(deleteEle);
}
