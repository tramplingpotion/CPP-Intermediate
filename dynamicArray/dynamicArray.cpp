#include <iostream>

int main(int argc, char const *argv[])
{
    int *nameOfTheDynamicArray;
    nameOfTheDynamicArray = new int(1); // count
    nameOfTheDynamicArray[0] = 32;      // repeat based on count value
    std::cout << nameOfTheDynamicArray[0];

    void deleteDynamicArray()
    {
        delete[] nameOfTheDynamicArray; // delete heap array because it is created in runtime compared to static array during compiled time.
    };
    return 0;
}
