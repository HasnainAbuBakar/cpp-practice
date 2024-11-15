#include<iostream>
using namespace std;
int main()
{
	int limit;
	int num;
	cout<<"Enter your limit = ";
	cin>>limit;
	cout<<"Enter your number = ";
	cin>>num;
	
	int i;
	for(i = 1; i<= limit; i++)
	{
		cout<<num<<" x "<<i<<" = "<<i*num<<endl;
	}	
}

