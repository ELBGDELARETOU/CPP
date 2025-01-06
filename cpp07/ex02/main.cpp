#include "Array.hpp"
// 
// int main() {
    // Array<int> arr(5);
    // 
    // for (unsigned int i = 0; i < arr.size(); i++) {
        // arr[i] = i * 2;
        // std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;
// 
    // try {
        // std::cout << arr[10] << std::endl;
    // } catch (const std::exception& e) {
        // std::cout << e.what() << std::endl;
    // }
// 
    // Array<int> arr2 = arr;
    // for (unsigned int i = 0; i < arr2.size(); i++) {
        // std::cout << arr2[i] << " ";
    // }
    // std::cout << std::endl;
// 
    // Array<int> arr3(3);
    // arr3 = arr;
    // for (unsigned int i = 0; i < arr3.size(); i++) {
        // std::cout << arr3[i] << " ";
    // }
    // std::cout << std::endl;
// 
    // return 0;
// }
// 
int main() {
    Array<std::string> arr(3);
    
    arr[0] = "salut";
    arr[1] = "ca";
    arr[2] = "va";

    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    try {
        std::cout << arr[5] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Erreur: " << e.what() << std::endl;
    }

    Array<std::string> arr2 = arr;
    for (unsigned int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    Array<std::string> arr3(2);
    arr3 = arr;
    for (unsigned int i = 0; i < arr3.size(); i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
