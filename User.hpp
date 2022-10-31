#ifndef __USER__
#define __USER__

#include <iostream>
#include <string>
#include "Calculator.hpp"

class User
{
private:
     std::string name;
     std::string first_name;
     Calculator *calculator;
     static int nombreInstance;
     
public:
    double calculateArea(double rayon);
    int calculateFactorial(int const& number)const;
    std::string getName()const;
    std::string getFirstName()const;
    static int getInstances();
    void toString()const;
    bool operator==(User const& user);
    User(std::string name,std::string first_name);
    ~User();
};

#endif // __PERSONNE__
