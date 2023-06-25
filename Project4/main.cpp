#include <iostream>
#include <fstream>
#include <iomanip>

using std::string;

class student {

	int studentN;
	string name;
	int engm, mathsm, scim, compscim;
	double average;
	char grade;
public:
	void calculateAverage();
	void getData();
	void studentNumber();
	void showData() const;
};

void student::calculateAverage() {

	average = (engm + mathsm + scim + compscim) / 4;
	if (average >= 90)
		grade = 'A';
	if (average >= 75)
		grade = 'B';
	if (average >= 55)
		grade = 'C';
} 

int main() {


}