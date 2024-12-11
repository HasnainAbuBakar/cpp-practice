#include<iostream>
using namespace std;
string Result(int);

int main() 
{
    int percentage;
    
    cout << "Enter your exam percentage: ";
    cin >> percentage;

    cout << "Your grade is: " << Result(percentage) <<endl;
}

string Result(int percentage) 
{
    if (percentage <= 49) 
	{
        return "Fail";
    } 
	else if (percentage <= 59) 
	{
        return "C";
    } 
	else if (percentage <= 69) 
	{
        return "B";
    } 
	else if (percentage <= 79) 
	{
        return "A";
    } 
	else 
	{
        return "A+";
    }
}
