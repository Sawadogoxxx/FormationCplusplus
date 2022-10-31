#ifndef __CALCULATOR__
#define __CALCULATOR__

#include <iostream>
#include <string>

class Calculator
{
private:
    const double PI=3.14;
    double number;
public:
    Calculator();
    int getNumber()const;
    void setNumber(int const& number);
    int factorial(int const& number)const;
    double calculateArea(double const& rayon);
    ~Calculator();
};

#endif 