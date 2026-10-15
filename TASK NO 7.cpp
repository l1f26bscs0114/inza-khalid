#include<iostream>
using namespace std;
int main()
{
	int celsius, fahrenheit;
	cout << "Enter temperature in celsius: ";
	cin >> celsius;
	fahrenheit = celsius * 9 / 5 + 32;
	cout << "Temperature in fahrenheit: " << fahrenheit << endl;
	//For 37 Celsius, the program prints 98 instead of 98.6.
	//because int use integer  value and ignore decimals.
	return 0;
}