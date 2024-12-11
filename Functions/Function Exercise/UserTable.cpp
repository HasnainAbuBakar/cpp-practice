#include<iostream>
using namespace std;
void userTable(int, int);

int main()
{
	int tableNumber;
	int tableLimit;
	cout<<"Enter table number: ";
	cin>>tableNumber;
	cout<<"Enter table limit: ";
	cin>>tableLimit;
	
	userTable(tableNumber, tableLimit);
}

void userTable(int tableNumber, int tableLimit)
{
	for(int i = 1; i <= tableLimit; i++)
	{
		cout<<tableNumber<<" x "<<i<<" = "<<tableNumber*i<<endl; 
	}
}
