#include <iostream>

int main()
{
    int  x[10], n;
    int min, max;
    
    min = max = 0;

    do{
        std::cout << "n=";
        std::cin >>n;
    }
    while(n < 2  || n > 10);

    for (int i = 0; i < n; ++i){


        std::cin >> x[i];
    }

    min = max = x[0];

    for(int i = 0 ; i < n; ++i){

        if(x[i] > max){

            max = x[i];
        }

        if(x[i] < min){

            min = x[i];
        }

        return 0;
     

    }
}