#include <iostream>
extern void printNumbers(int *numbers,int length);
extern int *readNumbers();

int main(){
    int* ptr = readNumbers();
    std::cout << *ptr << std::endl;


    return 0;
}