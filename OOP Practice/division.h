#ifndef DIVISION_H
#define DIVISION_H

#include<iostream>
using namespace std;

class Divider
{
private:
    int num1, num2;

public:
    void setNumbers(int a, int b) 
	{
        num1 = a;
        num2 = b;
    }

    int divide() 
	{
        return num1 / num2;
    }
};
#endif
