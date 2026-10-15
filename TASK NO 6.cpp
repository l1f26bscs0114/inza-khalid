#include<iostream>
using namespace std;
int main()
{
	int price, quantity;
	int total, tax, grandTotal;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter quantity: ";
	cin >> quantity;
	total = price * quantity;
	tax = total * 5 / 100;
	grandTotal = total + tax;
	cout << "Total= " << total << endl;
	cout << "Tax= " << tax << endl;
	cout << "Grand Total= " << grandTotal << endl;
	//The calculator gives 34.65, but my program prints 34
	//because int store only numbers and ignore the decimal part
	return 0;
}