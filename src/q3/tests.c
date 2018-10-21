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
    
    genericLinkedElement *ele = createEle(&p, sizeof(char), &printChar);

    printf("\nTests complete.\n");
}
