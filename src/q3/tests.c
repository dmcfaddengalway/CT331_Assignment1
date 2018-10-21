#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");

  //...

  printf("\nTests complete.\n");
}

void printChar(void *data) {
    printf("%c\n", *(char)*data);
}

void printStr(void *data) {
    printf("%s\n", data);
}

void printInt(void *data) {
    printf("%d\n", *(int)*data);
}

void
