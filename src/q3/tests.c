#include <stdio.h>
#include "genericLinkedList.h"

void printChar(void *data) {
    printf("%c\n", *(char*)data);
}

void printStr(void *data) {
    printf("%s\n", data);
}

void printInt(void *data) {
    printf("%d\n", *(int*)data);
}

void printFloat(void *data) {
    printf("%f\n", *(float*)data);
}

void runTests(){
    printf("Tests running...\n");

    char p = "P";
    
    genericListElement *ele = createEle(&p, sizeof(char), &printChar);
    
    traverse(ele);
    
    length(ele);
    
    char word[] = "Eggsalad";
    genericListElement *ele2 = insertAfter(ele, &word, sizeof(word), &printStr);
    
    traverse(ele);
    
    length(ele);
    
    int q = 19;
    insertAfter(ele2, &q, sizeof(q), &printInt);
    
    traverse(ele);
    length(ele);

    printf("\nTests complete.\n");
}
