#include <iostream>
#include "header.h"

int main()
{
    int x[10], n;

    do{
        std::cout << "n=";
        std::cin >> n;
    }
    while(n < 2 || n > 10);

    for (int i = 0; i < n; ++i){

        std::cin >>x[i];
    }

    // new_arr(x, n);

   int  gumar =sum(x, n);

   std::cout << "gumar=" << gumar <<std::endl;

    

    return 0;
}

