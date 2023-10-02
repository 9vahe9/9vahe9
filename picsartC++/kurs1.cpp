#include <iostream>


int  main() {

 int  x[10][10], n;

   

 do{
     std::cout << "n = ";
     std::cin >> n;
    } while(n < 2 || n >10);

    
    // Fill the matrix
    for (int i = 0; i < n; ++i) {
        for (int  j = 0; j < n; ++j) {
            
            std::cin >> x[i][j];
        }
    }

    int max = x[0][0];
    int index = 0; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (max < x[i][j]) {
                max = x[i][j];
                index = i;
            }
        }
    }

    int y[10];

    for (int i = 0; i < n; ++i){
        
        y[i]=x[index][i];
    }



     

    std::cout << "\nMatrix:\n";
    for (int i = 0; i < n; ++i) {
        if (i != index) { // stuguma i im toxna te che  i fruma handipuma index u jnjum 

            std::cout << "[" << i << "]: ";

            for (int j = 0; j < n; ++j) {
               std::cout << x[i][j] << ' ';;
            }
            // endl if tak karanq mtcnenq
        }
        std::cout << std::endl;
    }
    std::cout << "\nMax line:\n";
    for(int i =0; i < n; ++i){
        std::cout << y[i] << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}
