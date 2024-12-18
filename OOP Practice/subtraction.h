#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include<iostream>
using namespace std;

class Subtracter
{
private:
    int num1, num2;

public:
    void setNumbers(int a, int b) 
	{
        num1 = a;
        num2 = b;
    }

    int subtract() 
	{
        return num1 - num2;
    }
};
#endif
