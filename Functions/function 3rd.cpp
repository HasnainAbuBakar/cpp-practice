#include<iostream>
using namespace std;
void Add();
void Sub();
void Mul();

int choice;
int main(){
	
	cout<<"\nPress 1 for Addition. \nPress 2 for Subtraction.\n Press 3 for Multiplication.\n";
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			Add();
			break;
		case 2:
			Sub();
			break;
		case 3:
			Mul();
			break;
	}
}

void Add(){
	int value_One;
	int value_Two;
	
	cout<<"Enter your first value: ";
	cin>>value_One;
	cout<<"Enter your second value: ";
	cin>>value_Two;
	
	cout<<"Your final result is = "<<value_One+value_Two<<endl;
}
void Sub(){
	int value_One;
	int value_Two;
	
	cout<<"Enter your first value: ";
	cin>>value_One;
	cout<<"Enter your second value: ";
	cin>>value_Two;
	
	cout<<"Your final result is = "<<value_One-value_Two<<endl;
}
void Mul(){
	int value_One;
	int value_Two;
	
	cout<<"Enter your first value: ";
	cin>>value_One;
	cout<<"Enter your second value: ";
	cin>>value_Two;
	
	cout<<"Your final result is = "<<value_One*value_Two<<endl;
}
