extern bool equalsArray(int *numbers1,int *numbers2,int length);
#include <iostream>

int main(){
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int length = 5;

    bool result = equalsArray(array1, array2, length);

    if (result == true)
    {
        std::cout << "Arrays match!" << std::endl;
    }
    else
    {
        std::cout << "Arrays dont match" << std::endl;
    }
    
    return 0;
}