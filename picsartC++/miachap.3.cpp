#include <iostream>

int main()
{
    int x[10], n, count = 0;
    int y[10];
    
    do{
        std::cout<< "n=";
        std::cin >> n;
    }
    while (n < 2 || n > 10);
    
    for (int i = 0 ; i < n; ++i){
        std::cin>> x[i];

    }


    for (int i = 0; i < n; ++i){

        y[i]=x[i];
    }
 
     return 0;   
}