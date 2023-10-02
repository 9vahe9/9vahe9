#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr = (int*)malloc(sizeof(int)); //calloc(sizeof(int), 1);
    printf("%i \n", *ptr);
    *ptr = 5;
    printf("%i \n", *ptr);
    free(ptr);
}
