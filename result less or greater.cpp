#include<iostream>
using namespace std;
int main()
{
	int value_One;
	int value_Two;
	int result;
	
	cout<<"Enter first value = ";
	cin>>value_One;
	cout<<"Enter second value = ";
	cin>>value_Two;
	
	result = value_One+value_Two;
	
	if(result>value_One)
	{
		cout<<"Your result is greater then value one";
	
	}
	else
	{
		cout<<"Your result is less then value one";
	}
}
