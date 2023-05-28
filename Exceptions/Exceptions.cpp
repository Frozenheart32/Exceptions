
#include <iostream>
#include <sstream>

#include "Fraction.h"



int FromString(const std::string& str)
{
    std::istringstream ss(str);
    int ret = 0;
    ss >> ret;
    if(ret == 0 && str != "0")
    {
        throw std::exception("invalid input string");
    }
    return ret;
}


int main(int argc, char* argv[])
{
    std::string numerator_str{};
    std::string denominator_str{};
    
    std::cout<<"Enter numerator and denominator" << std::endl;
    
    try
    {
        std::cin >> numerator_str >> denominator_str;
        int numerator = FromString(numerator_str);
        int denominator = FromString(denominator_str);
        
        Fraction fraction{numerator, denominator};
        auto result = fraction.divide();
        std::cout << "result = "<< result;
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Runtime Error message: " << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception Error message: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "Some exception..." << std::endl;
    }
    
    return 0;
}
