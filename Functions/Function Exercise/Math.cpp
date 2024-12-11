#include<iostream>
using namespace std;
void Math(int, int, int);

int main()
{
	int firstValue;
	int secondValue;
	int choice;
	
	cout<<"Enter your first value: ";
	cin>>firstValue;
	cout<<"Enter your second value: ";
	cin>>secondValue;
	
	cout<<"Please enter your choice: \nPress 1 for Addition \nPress 2 for Subtraction \nPress 3 for Multiplication \nPress 4 for divide"<<endl;
	cin>>choice;
	
	Math(firstValue, secondValue, choice);
}

void Math(int firstValue, int secondValue, int choice)
{
	switch(choice)
	{
		case 1:
			cout<<"Your result is: "<<firstValue+secondValue;
			break;
		case 2:
			cout<<"Your result is: "<<firstValue-secondValue;
			break;
		default:
			cout<<"Your result is: "<<firstValue*secondValue;
			break;
		case 4:
			cout<<"Your result is: "<<firstValue/secondValue;
			break;
		case 5:
			cout<<"Invalid choice";
			break;
	}
}
