#include <iostream>

int dynamicArray(int argc, char const *argv[])
{
    int *nameOfTheDynamicArray;
    nameOfTheDynamicArray = new int(1); // count
    nameOfTheDynamicArray[0] = 32;      // repeat based on count value
    //here can set value or display them
    std::cout << nameOfTheDynamicArray[0];

    return 0;
}
