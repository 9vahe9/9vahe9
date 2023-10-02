#include <stdio.h>

int main(){
int n = 0 ;

printf("enter number");

scanf("%i", &n);

for(int i = 0; i < n; ++i){

    for(int j = 0: j < n; ++j){


    if(j == 0 || i == 0 || j == n-1  i==n-1){

        printf("*");
    }
    else{
        printf("  ");
    }

    }

    printf("\n");



}

return 0;

}