#include <iostream>

int main()
{
    int x[10], n;

    do{
        std::cout << "n=";
        std::cin >> n;
    }
    while(n < 2 || n > 10);

    for (int i =0; i < n; ++i){
           
        std:: cin >> x[i];
             
    }

    for (int i = 0; i < n; ++i){

        if( x[i] & 1 == 0){
            
            x[i] = 0;
          
        }

        std::cout <<"x[i]=" << x[i];
    }




    return 0;
}