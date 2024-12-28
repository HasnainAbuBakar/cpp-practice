#include<iostream>
using namespace std;
int main() 
{
    const float cubicInchesToLiters = 0.0163871;
    const float cubicInchesToGallons = 231.0;

    float length;
	float width;
	float height;

    cout << "Enter the Length: ";
    cin >> length;

    cout << "Enter the Width: ";
    cin >> width;

    cout << "Enter the Height: ";
    cin >> height;

    float volumeCubicInches=length*width*height;
    float volumeLiters=volumeCubicInches*cubicInchesToLiters;
    float volumeGallons=volumeCubicInches/cubicInchesToGallons;

	cout<<endl;
    cout<< "The aquarium can hold approximately: "<<endl;
    cout<< volumeLiters<<" liters of water"<<endl;
    cout<< volumeGallons<<" US gallons of water"<<endl;
}
