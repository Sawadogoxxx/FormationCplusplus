#include <iostream>
#include <cmath>
#include "User.hpp"
#include "Calculator.hpp"


int User::nombreInstance=0;

User::User(std::string name,std::string first_name)
{
    this->name=name;
    this->first_name=first_name;
    this->calculator=new Calculator();
    User::nombreInstance++;
}

int User::getInstances(){
    return User::nombreInstance;
}
std::string User::getName()const
{
    return this->name;
}
std::string User::getFirstName()const
{
    return this->first_name;

}
bool User::operator==(User const& user){
    return (this->name==user.getName()&&this->first_name==user.getFirstName());
}
int User::calculateFactorial(int const& number)const
{
    return this->calculator->factorial(number);
}

double User::calculateArea(double rayon)
{ 
    return this->calculator->calculateArea(rayon);
}

void User::toString()const{
    std::cout<<" your name: "+name<<" your first name "+first_name<<std::endl;
}

User::~User()
{
    delete calculator;
    User::nombreInstance--;
}


