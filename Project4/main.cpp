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
	else
		grade = 'F';
} 

void student::getData() {

	std::cout << "Enter student number: " << std::endl;
	std::cin >> studentN;
	std::cout << "Enter student name: " << std::endl;
	std::cin.ignore();
	std::cin >> name;
	std::cout << "Enter students marks out of 100" << std::endl;
	std::cout << "English Marks: ";
	std::cin >> engm;
	std::cout << "Maths marks: ";
	std::cin >> mathsm;
	std::cout << "Science marks: ";
	std::cin >> scim;
	std::cout << "Computer Science marks: ";
	std::cin >> compscim;
	calculateAverage();

}

void student::showData() const {

	std::cout << "Student Number: " << studentN << std::endl;
	std::cout << "Student Name: " << name << std::endl;
	std::cout << "English Mark: " << engm << std::endl;
	std::cout << "Maths Mark: " << mathsm << std::endl;
	std::cout << "Science Mark: " << scim << std::endl;
	std::cout << "Computer Science Mark: " << compscim << std::endl;

}

int main() {


}