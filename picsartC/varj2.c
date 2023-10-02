#include <stdio.h>

int main(){


  int arr[] = {5, 6, 3, 7, 4};
  int *ptr = arr;
  const int n =sizeof(arr)/sizeof(arr[0]); 

  for(int i = 0; i <n ; ++i){

    printf("%d ", *(ptr+i));    
  }
    printf("%p ", (ptr+i));

  return 0;

}