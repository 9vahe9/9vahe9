#include <iostream>
#include <cstdint>

int main()
{    
    int num1;
    std::cin >> num1;
    std::uint8_t num = (std::uint8_t)num1;
    std::uint8_t left = num & 0x80;
    std::uint8_t right = num & 0x01; //0x01 aj bit hanecinq
    //std::cout << "num1: " << num1 << " left: " << (int)left << " right: " << (int)right << std::endl;
    bool res = left && right;

    std::cout << res << std::endl;

    

}