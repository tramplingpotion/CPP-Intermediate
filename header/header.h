#include <iostream>
#pragma once    
//why use #pragma once?
//to make sure repitative #include of function will not cause an error
//why repitative #include of same function happens?
//because sometimes header files get complicated and different header files have same function, with #pragma once if same function detected it will only read one of the function


int sumOf(int x, int y){
    int sum = x+y;
    return sum;
}