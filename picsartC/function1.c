#include <stdio.h>
const int Max_size = 100;

void Big( void (*)  (int *), int*, int);

int main()
{
    srand(time(0));

    int size = 0 ;


do{
     printf("Enter the size for arr"); 
     scanf("%d", &size);

} while(size < 1  || size > Max_size);

int arr[Max_size] = {};

for(int i = 0; i < size; ++i )
{
    
    printf("%d", arr[i]);
}

}