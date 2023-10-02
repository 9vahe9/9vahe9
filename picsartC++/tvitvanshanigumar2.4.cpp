#include <iostream>

int main()
{
    int result = 0;
    int remainder; //mnacord
    int number;

    while(number){

        remainder = number % 10;
        result += remainder;
        number /= 10;
        
    }

    std::cout <<"result"<< result << std::endl;
}
