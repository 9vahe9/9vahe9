#include <iostream>

int main()
{
 const int rows = 3;
    const int cols = 3;
    
     int  mat[rows][cols]= {
        {2, 3, 10},
        {30, 4 ,5},
        {3, 4 ,1}
     };

     int sum = 0;

     for(int i = 0; i < rows; ++i){

        sum += mat[i][cols - i -1];
     }

     for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j)
        
        std::cout << "matrix ="<<mat[rows][cols] <<std::endl;
     }

     return 0;
}