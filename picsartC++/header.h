#include <iostream>


int new_arr(int x[], int a, int b, int & y[], int &k){

    int a,  b, y[20];
    int k = 0;
/*
    do{
        std::cout << "a=";
        std::cin >> a;

        std::cout << "b=";
        std::cin >> b;
    }
    while(a < 0 || b > size);
*/

    for(int i = a; i <= b; ++i){

        y[k++] = x[i];
        
    }

  for(int i = 0; i < k; ++i)
   std::cout << "y[i]=" << y[i] << std::endl;

   return 0;
}


int sum(int x[], int size){

    int sum = 0;
       
       for(int i = 0; i < size; ++i){

          sum += x[i];
       }

       return sum;

}