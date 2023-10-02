#include <iostream>
//reverse
int main()
{
    int x[10], n;
   
  int  count = sizeof(x[i])/sizeof(x[0]);
    do{
        std::cout << "n=";
        std::cin >> n;

    }
    while(n < 2 || n > 10);

    for (int i = 0; i < n; ++i){

        std::cin >> x[i];
    }

    for (int i = 0 ; i < n; ++i){
        int temp = x[count - i - 1]; //ajic               //jamanakavor
        x[count - i - 1] = x[i]; //dzax
        x[i]= x[count -1 -i]; 







    }
}