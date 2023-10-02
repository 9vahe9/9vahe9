#include <stdio.h>

int main(){

    int x = 0;
    int *ptr1 = &x;

    int y = 1;
    int *ptr2 = &y;

    double h = 0;
    double *ptr3 = &h;

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%p\n", ptr3);
    
}