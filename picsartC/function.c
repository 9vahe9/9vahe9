#include <stdio.h>

typedef void (*T) (int);

void another_function(int a)
{
    printf("Hello from another %i \n", a);

}

void big_function(T poqr_function_ptr)
{
    printf("Big function start \n");
    poqr_function_ptr(2);   //int  tipa 2 tpuma ain 2
    printf("Big function end \n");

}

int main()
{
    big_function(another_function);

    return 0;
}
