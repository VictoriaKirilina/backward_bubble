#include <iostream>

int main() {
    setlocale (LC_ALL, "1251" );
    int arr[] = {2, 3, 1, 4, 5, 8, 6, 7, 9, 11};
    int size = 10;
    
   
    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) std::cout << " ";
    }
    std::cout << std::endl;
    
    
    for (int i = size - 1; i > 0; i--) {
        
        for (int j = size - 1; j > size - 1 - i; j--) {
            if (arr[j] < arr[j - 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    
   
    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) std::cout << " ";
    }
    std::cout << std::endl;
    
    return 0;
}