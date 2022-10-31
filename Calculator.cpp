#include <iostream>
#include <cmath>
#include "Calculator.hpp"

int Calculator::factorial(int const& number)const{
    int fact(1);
    if(number==0||number==1){
        return 1;
    }else
    { return (number)*factorial(number-1);}
    
}

double Calculator::calculateArea(double const& rayon){
    return  PI*pow(rayon,2);
}
int Calculator::getNumber()const{
    return this->number;
}
void Calculator::setNumber(int const& number){
    this->number=number;
}

Calculator::Calculator(){}

Calculator::~Calculator()
{}



