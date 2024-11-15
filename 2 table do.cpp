#include<iostream>
using namespace std;
int main()
{
	int i;
	int enter;
	
	do
	{
		int num;
		int limit;
		
		cout<<"Enter your number ";
		cin>>num;
		
		cout<<"Enter your limit ";
		cin>>limit;
		
		for(i=1; i<=limit; i++)
		{
			cout<<num<<" x "<<i<<" = "<<num*i<<endl;
		}
		
		cout<<"Enter 1 to continue OR any other number to exit";
		cin>>enter;
	}
	while(enter==1);
}
