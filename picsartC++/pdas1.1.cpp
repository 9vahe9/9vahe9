#include <iostream>

int main()
{ 
    //tverina nayelu veragri mijinin
    float a = 0;
    float b = 0; 
    float c = 0;
    int p = 0;

    std::cout << "a=";
    std::cin >>a;

    std::cout << "b=";
    std::cin >>b;

    std::cout << "c=";
    std::cin >> c;

    p =  (a + b + c) / 3;

    std::cout << "p=" << p <<std::endl;
    

    return 0;
}