#include <iostream>
#include <cstdint> //size_t es gradaranic

template<typename T>
void arr_print(const T& arr, const size_t count) {
    for (size_t i = 0; i < count; ++i) {
        if (count - 1 != i) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i];
        }
    }
    std::cout << std::endl;
}

void arr_remove_at(int*& arr, const size_t index, size_t& n) 
{
    int* buffer = new int[n - 1];

    for(int i = 0, j = 0; i < n; ++i){
         
         if(i!=index){
             
            buffer[j++] = arr[i];

         }
        
    }    

    delete[] arr;
    arr = buffer;   
}

int main()
{
    int* arr = new int [5] { 1, 2, 3, 4, 5 };
    //print myus funciton heto print







  
}
