#include<iostream>
using namespace std;
int main()
{
	int persentage;
	cout<<"Enter your exam persentage = ";
	cin>>persentage;
	
	if(persentage<=49)
	{
		cout<<"Fail";
	}
	else if(persentage<=59)
	{
		cout<<"C";
	}
	else if(persentage<69)
	{
		cout<<"B";
	}
	else if(persentage<=79)
	{
		cout<<"A";
	}
	else if(persentage>=80)
	{
		cout<<"A+";
	}
}
