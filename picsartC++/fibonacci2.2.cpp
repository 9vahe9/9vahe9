#include <iostream>

int a = 5;

int main()
{
    int num;
    do
    {
        std::cout <<"enter the number";
        std::cin>>num;
    }
    while (num < 0);

    int a = 0; 
    int b = 1;
    int next; //a b i gumar 

    for (int i = 0; i < num; ++i){

        if(i <= 1){
            next = i;
        }
        else {
            next = a + b;
            a = b;
            b = next;

            std::cout<< next<<"next=";
        }
    }



}