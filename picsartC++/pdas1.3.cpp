#include <iostream>

int main()
{
    int a = 0;

    std::cout <<"a=";
    std::cin >>a;

    for (int i=0; i<10; ++i)
    {
        int s = a * i;
        
        std::cout << "s=" << a <<"*" << i << "=" << s <<std::endl;
     
        
    }
}