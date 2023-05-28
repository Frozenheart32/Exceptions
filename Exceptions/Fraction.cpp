#include "Fraction.h"
#include <stdexcept>


Fraction::Fraction(int numenator, int denominator)
{
    if(denominator == 0)
    {
        throw std::runtime_error("Divide by zero exception");
    }
    
    numerator_ = numenator;
    denominator_ = denominator;
}

float Fraction::divide()
{
    return numerator_/static_cast<float>(denominator_);
}
