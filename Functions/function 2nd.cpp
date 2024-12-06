#include<iostream>
using namespace std;
void Line(){
	cout<<"========================================="<<endl;
}
void Add(){
	int valueOne;
	int valueTwo;
	
	cout<<"FOR ADDITION"<<endl;
	cout<<"Enter 1st value: ";
	cin>>valueOne;
	cout<<"Enter 2nd value: ";
	cin>>valueTwo;
	
	cout<<"The result is = "<<valueOne+valueTwo<<endl;
}

void Subtract(){
	int valueOne;
	int valueTwo;
	
	cout<<"FOR SUBTRACT"<<endl;
	cout<<"Enter 1st value: ";
	cin>>valueOne;
	cout<<"Enter 2nd value: ";
	cin>>valueTwo;
	
	cout<<"The result is = "<<valueOne-valueTwo<<endl;
}
void Product(){
	int valueOne;
	int valueTwo;
	
	cout<<"FOR MULTIPLY"<<endl;
	cout<<"Enter 1st value: ";
	cin>>valueOne;
	cout<<"Enter 2nd value: ";
	cin>>valueTwo;
	
	cout<<"The result is = "<<valueOne*valueTwo<<endl;
}
int main(){
	Add();
	Line();
	Subtract();
	Line();
	Product();
	Line();
}
