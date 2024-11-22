#include <iostream>  
#include <string>     
#include <fstream>    
#include <ctime>      

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");

    int a = 5, b = 3, c = 2, d = 4;  // Оголошення змінних 

    // Обчислення виразу за допомогою бітових операцій 
    int result = (b << 5) + b + (((d << 4) - d + (a << 3) + (a << 2)) >> 9) - ((c << 6) + c) + (d << 4) - (d << 1);

    // Виведення результату на екран
    cout << "Результат: " << result << endl;

    return 0;
}
