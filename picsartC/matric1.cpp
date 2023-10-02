#include <iostream>


int main()
{
    
     int  x[10][10], sum = 0;
     int n;

    do
    {
        std::cout << "n=";
        std::cin >> n;
    }
    while (n<2 || n>10);

    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {

          std::cin >> x[i][j];
        }
    }

  for (int i = 0; i < n; ++i)
  {
    for(int j = i+1; j < n; ++j)
    {

        sum += x[i][j];
    }
  }

    std::cout << "sum=" <<sum;

     return 0;



}