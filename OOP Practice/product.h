#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include<iostream>
using namespace std;

class Productor
{
private:
    int num1, num2;

public:
    void setNumbers(int a, int b) 
	{
        num1 = a;
        num2 = b;
    }

    int product() 
	{
        return num1 * num2;
    }
};
#endif
