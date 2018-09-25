#include <stdio.h>

int a;
int* b;
long c;
double* d;
char** e;

int main(int arg, char* argc[]){
    printf("Hello assignment1.\n");
    
    printf("%d \n", sizeof(a));
    printf("%d \n", sizeof(b));
    printf("%d \n", sizeof(c));
    printf("%d \n", sizeof(d));
    printf("%d", sizeof(e));
    
    return 0;
}
