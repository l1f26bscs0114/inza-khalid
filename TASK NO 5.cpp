#include<iostream>
using namespace std;
int main()
{
	int age, credithours, feepercredithour;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter credit hours: ";
	cin >> credithours;
	cout << "Enter fee per credit hour: ";
	cin >> feepercredithour;
	int totalfee = credithours * feepercredithour;
	int feeAfterdiscount = totalfee - 20000;
	cout << "\n--- Fee Details ---" << endl;
	cout << "Total fee: " << totalfee << endl;
	cout << "Fee after Rs 2000 discount: " << endl;
	int currentYear = 2026;
	int yearOfBirth = currentYear - age;
	int yearTurn25 = yearOfBirth + 25;
	cout << "\n---Age Details---" << endl;
	cout << "Year of Birth: " << yearOfBirth << endl;
	cout << "Year when you will turn 25: " << yearTurn25 << endl;
	//Experiment 1:
	//Run the Program and type all three values on one line separated by spaces (19 15 8000).
	//Then type each value on a seperate line, and then separated by tabs. Is the result different? Why?
	//Answer: In all Three cases, the result is same.
	//Reason: cin reads values one by one.
	//spaces, enter, and tab all work as separators.
	//So we get the same result in every case.
	//Experiment 2:
	//Type the age as 19.8.What is stored in age, and what happens to the next vale? Explain Why.
	//Answer: In 'age' only 19 is stored. The ".8" left behind.
	//So the next variable 'credithours' automatically gets ".8" which causes input failure .
	//Reason: Because 'age' is an int variable, so it stores only whole numbers.
	//When we enter 19.8, age gets 19 and .8 ignore.
	//The next cin may read .8 instead of next value
	//It causes an input error.
	return 0;
}