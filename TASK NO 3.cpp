#include<iostream>
using namespace std;
int main()
{
	cout << "Expression 1: " << 10 + 5 * 2 << endl;
	cout << "Expression 2: " << (10 + 5) * 2 << endl;
	//Expression 3 is evaluated left-to-right
	cout << "Expression 4: " << 100 / 7 << endl;
	cout << "Expression 5: " << 100 % 7 << endl;
	cout << "Expression 6 :" << 2 * 3 + 8 / 4 - 1 << endl;
	//In expression 6 brackets added to make 8
	cout << "Expression 6 (with brackets for 8 :" << 2 * (3 + 8 / 4 - 1) << endl;
	return 0;
}