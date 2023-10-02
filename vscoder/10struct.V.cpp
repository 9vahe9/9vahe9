#include <iostream>
#include <string.h>

struct TaxiDriver {
    char azg[20]; 
    int uxeert; // Количество поездок
    int  texapoxvac_uxevor; // Количество перевезенных пассажиров
    int vastakac_gumar; // Заработанная сумма
};

int main() {
    int n;
    std::cout << "taxineri qanak ";
    std::cin >> n;

    TaxiDriver* drivers = new TaxiDriver[n];

    for (int i = 0; i < n; ++i) {
        TaxiDriver driver;
        std::cout << "azganun: ";
        std::cin >> driver.azg;
        std::cout << "uxertnei qanak: ";
        std::cin >> driver.uxeert;
        std::cout << "texapoxvac uxevorner: ";
        std::cin >> driver.texapoxvac_uxevor;
        std::cout << "vastakac gumar: ";
        std::cin >> driver.vastakac_gumar;
        
        drivers[i] = driver; 
    }

     std::cout << "Varordneri cucak, voronq katarel en  10-ic avel uxeert & texapoxel 1000-ic voch pakas uxevor:" << std::endl;
    for (int i = 0; i < n; ++i) {
        if (drivers[i].uxeert > 10 && drivers[i].texapoxvac_uxevor >= 1000) {
            std::cout << "Varordi azganun: " << drivers[i].azg;
            std::cout << ", Vastkac gumar: " << drivers[i].vastakac_gumar << std::endl;
        }
    }

    delete[] drivers;

    return 0;
}
