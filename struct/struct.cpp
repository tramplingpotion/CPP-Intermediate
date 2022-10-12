//struct is the opposite of class
//class default access modifier is private and vice versa
//we use it because sometimes we need to create simple small class that is public by default

#include <iostream>

struct myStruct
{
//public:
    int number = 2; // default same as public in class
};

int main(int argc, char const *argv[])
{
    myStruct myObj; //because it is the same as class it has the same way of creating object
    std::cout<<myObj.number;
    return 0;
}

