#include <iostream>
using namespace std;
void printTable (int);

int main() {
	int tableNumber;
	
	cout<<"Enter table number: ";
	cin>>tableNumber;
	
    printTable(tableNumber);
}

void printTable(int num) 
{
    for (int i = 1; i <= 10; i++) 
	{
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
