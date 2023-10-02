#include <stdio.h>
int main()
{
    unsigned int x = 3950617253;

     printf(“%ul\n”, x);

     char* ptr = (char*)&x;

     int tmp = *(ptr + 1);

     *(ptr + 1) = *(ptr + 2);

      *(ptr + 2) = tmp;
        printf(“%ul”, x);
          return 0;
}