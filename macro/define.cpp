// macro (#define) is not commonly used because it fits only in certain cases

// for example most dev use this macro to log for debugging app or software
// log for debug is different than log for throubleshoot
// log for debug is use during development and log for troubleshoot for released software

// this macro is not commonly used because it can create confusion for other developer
// this is because macro is use to replace line of code when compiler is running
// macro replace long line of code with simple word for logging, it is good but not good for most other things

// #define macroName lineOfCodeThatWillBeReplacedWhenCompilerRun

#include <iostream>
#define ARRAYSIZE(array) (sizeof(array) / sizeof(array[0]))

int main(int argc, char const *argv[])
{
    int arrayVar[] = {23, 24, 43, 12, 43, 23};
    std::cout << "Array Size: " << ARRAYSIZE(arrayVar);
    return 0;
}
