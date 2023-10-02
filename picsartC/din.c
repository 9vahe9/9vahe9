#include <stdio.h>
#include <stdlib.h>

int * push_back(int*, int);

int main()
{
     int size = 0;

     do{
        printf("Enter the size of dynamic arr");
        scanf("%d", &size);
     } while (size < 1);

     int* arr = (int*) calloc(size, sizeof(int));

     for (int i = 0; i < size; ++i){

        printf("Enter arr[%d]:", i);
        scanf("%d", arr + i);
     }

     arr = push_back(arr, size);

     printf("Enter arr[%d]:", size);
     scanf("%d", arr + size);

     for (int i = 0; i <=size /*size+1*/; ++i){

        printf("%d ", arr[i]);
     } 
}