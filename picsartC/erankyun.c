#include <stdio.h>

int main(){

    int size = 0;
   scanf("%i", &size);

   for(int  i = 0; i < size; ++i){

    for(int  j= 0; j<=i; ++j){

        printf("*");
            }
            printf("\n");
   }

   return 0;
}