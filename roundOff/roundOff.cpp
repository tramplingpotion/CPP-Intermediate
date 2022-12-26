#include <iostream>
#include <cmath>

float roundoff(float value, unsigned char prec)
{
    float pow_10 = pow(10.0f, (float)prec);
    return round(value * pow_10) / pow_10;
}

int main(int argc, char const *argv[])
{
    auto rounded = roundoff(100.123456, 3);
    std::cout<<rounded;
    return 0;
}
