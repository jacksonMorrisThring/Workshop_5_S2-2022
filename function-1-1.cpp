#include <iostream>
int *readNumbers(){
    int* ptr = new int[10];
    for(int i = 0; i < 10; i++){
        std::cout << "Enter a number: ";
        std::cin >> *(ptr + i);
    }

    return ptr;
}
void printNumbers(int *numbers,int length){
    int i;
}