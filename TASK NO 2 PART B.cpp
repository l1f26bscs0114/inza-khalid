#include<iostream>
using namespace std;
int main()
{
	cout << "Average: " << 60 + 70 + 80 / 3 << endl;
	//Before Correction= 156
	cout << "Average: " << (60 + 70 + 80) / 3 << endl;
	//After Correction= 70
	return 0;
}