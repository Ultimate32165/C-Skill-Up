#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    printf("%d",ptr); 
    free(ptr);
    printf("Memory freed\n");

    // removing Dangling Pointer
    printf("%d",ptr); 
    ptr = NULL;
    printf("%d",ptr); 

    return 0;
}