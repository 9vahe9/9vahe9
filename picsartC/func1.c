#include <stdio.h>

int main()
{
    int* arr=(int*) calloc(5, sizeof(int));

    for (int i = 0; i < 5; ++i){

        printf("d/n", arr[i]+i);

    }
    free(arr);
    arr = NULL;
}