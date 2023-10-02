#include <iostream>
#include "header.h"

int main()
{
    int x[10][10], b[10], y[10];
    int n,k=0;

    do{
        std::cout << "n=";
        std::cin >> n;   
    } while(n < 2 || n > 10);

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){

            std::cin >> x[i][j];
        }
    }

    for (int i = 0; i < n; ++i){

        b[i] = 0;  
    
     for(int j = 0; j < n; ++j){
         
         new_arr(x[i], n-1-i, n, b[i], k);

     }
    }

    for(int i = 0; i < n; ++i){

        std::cout << "b[" << i <<"]=" << b[i] << std::endl;
    }

    //  new_arr(x, size, a, b, y[], &k)

      for(int i = 0; i < k; ++i){

        std::cout << "y[" << i <<"]=" << y[i] << std::endl;
     }

     //funkica


     std::cout << "sum=" << sum << std::endl;  


     return 0;
   
}