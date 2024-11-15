#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"What is your age? ";
	cin>>age;
	
	if(age>18)
	{
		cout<<"Yes! you can cost the vote.";
	}
	else
	{
		cout<<"You can't cost the vote.";
	}
}
