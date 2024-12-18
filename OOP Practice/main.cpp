#include "addition.h"
#include "subtraction.h"
#include "product.h"
#include "division.h"
#include<iostream>
using namespace std;
int main() 
{
	Adder addition;
    addition.setNumbers(10, 5);

    cout << "The addition result is: " << addition.add() << endl;
    
    Subtracter subtraction;
    subtraction.setNumbers(10, 5);

    cout << "The subtraction result is: " << subtraction.subtract() << endl;
    
    
    Productor multiplication;
    multiplication.setNumbers(10, 5);

    cout << "The Product result is: " << multiplication.product() << endl;
    
    
    Divider division;
    division.setNumbers(10, 5);

    cout << "The Division result is: " << division.divide() << endl;
}
