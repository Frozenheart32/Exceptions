#pragma once

class Fraction
{

public:
    
    Fraction(int numenator, int denominator);
    
private:
    
    int numerator_ = 0.f;
    int denominator_ = 0.f;
    
public:
    
    float divide();
};
