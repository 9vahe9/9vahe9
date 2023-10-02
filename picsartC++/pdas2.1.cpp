#include <iostream>
// factorial
int main()
{
    int num;
    std::cin >> num;

    if(num <= 0)
    {
        std::cout <<"invalid number ";

        return 1; 
    }

//result
    int res = 0;
    for (int i = 1; i <= num; ++i){
       
          res+=i;
    }

    std::cout << "result=" << res << std::endl;

    return 0;
}