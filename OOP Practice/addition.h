#ifndef ADDITION_H
#define ADDITION_H

#include<iostream>
using namespace std;

class Adder 
{
private:
    int num1, num2;

public:
    void setNumbers(int a, int b) 
	{
        num1 = a;
        num2 = b;
    }

    int add() 
	{
        return num1 + num2;
    }
};
#endif
