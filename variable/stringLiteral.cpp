#include <iostream>

//string literal dont need to use strlen function to know the length because the compiler already know
//sometimes error from string variable parameter is not accepted because generic string is not string literal
//you need to convert the string to string literal first to us it

int main(int argc, char const *argv[])
{
    std::string name = "John";
    char* name2 = "John";   //most commonly used
    char name3[] = "John"; // string from array of characters

    return 0;
}
