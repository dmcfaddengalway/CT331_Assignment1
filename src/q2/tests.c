#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void testQueue() {
    listElement *l = createEl("Testing String (m)", 30);
    traverse(l);
    length(l);
    
    enqueue(&l, "Testing String (n)", 30);
    insertAfter(l, "Testing String (o)", 30);
    enqueue(&l, "Testing String (p)", 30);
    traverse(l);
    length(l);
    
    dequeue(l);
    traverse(l);
    length(l);
    
    deleteAfter(l);
    traverse(l);
    length(l);
    
}

void stackTest() {
    listElement *l = createEl("Testing String (a)", 30);
    traverse(l);
    length(l);
    
    push(&l, "Testing String (c)", 30);
    insertAfter(l, "Testign String (b)", 30);
    push(&l, "Testing String (d)", 30);
    traverse(l);
    length(l);
    
    pop(&l);
    traverse(l);
    length(l);
    
    deleteAfter(l);
    traverse(l);
    length(l);
}

void runTests() {
    printf("Tests running...\n");
    listElement* l = createEl("Test String (1)", 30);
    //printf("%s\n%p\n", l->data, l->next);
    //Test create and traverse
    traverse(l);
    printf("\n");

    //Test insert after
    listElement* l2 = insertAfter(l, "another string (2)", 30);
    insertAfter(l2, "a final string (3)", 30);
    traverse(l);
    printf("\n");

    // Test delete after
    deleteAfter(l);
    traverse(l);
    
    //Test length
    int len = length(l2);
    printf("# of elements in the list: %d", len);
    
    printf("\n\n");
    
    //PUSH
    listElement* l3 = createEl("push ele #1", 30);
    push(&l3, "push ele #2", 30);
    printf("Item pushed: ");
    traverse(l3);
    
    printf("\n");
    
    //POP
    printf("Item popped: ");
    pop(&l3);
    traverse(l3);
    
    printf("\n");
    
    //ENQUEUE
    listElement* l4 = createEl("enqueue ele #1", 30);
    enqueue(&l4, "enqueue ele #2", 30);
    printf("Item enqueued: ");
    traverse(l4);
    
    printf("\n");
    
    //DEQUEUE
    printf("Item dequeued: ");
    dequeue(&l4);
    traverse(l4);
    
    printf("\n");
    
    
    printf("\nTests complete.\n");
}
