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
	void calculateAverage(); // Average of grades
	void getData(); // Gets data of students
	int studentNumber() const; // returns student number
	void showData() const; // shows student record
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

 int student::studentNumber() const {

	 return studentN;
}

 void create_student();
 void display_records(int);
 void delete_student(int);
 void change_student(int);
 

 int main() {
	 char choice;
	 int num;
	 system("cls");
	 do {
		 std::cout << "\n\n\n\tRECORD MENU";
		 std::cout << "\n\n\t1.Create student record";
		 std::cout << "\n\n\t2. Search student record";
		 std::cout << "\n\n\t3. Display all students records";
		 std::cout << "\n\n\t4.Delete student record";
		 std::cout << "\n\n\t5.Modify student record";
		 std::cout << "\n\n\t6.Exit";
		 std::cout << "\n\n Select 1-6";
		 std::cin >> choice;
		 system("cls");
		 switch (choice)
		 {
		 case '1': create_student(); break;
		 case '2': std::cout << "\n\n\tEnter student number: ";
			 std::cin >> num;
		 case '3': display_records(num); break;
		 case '4': std::cout << "\n\n\tEnter student number: ";
			 std::cin >> num;
			 delete_student(num); break;
		 case '5': std::cout << "\n\n\tEnter student number: ";
			 std::cin >> num;
			 change_student(num); break;
		 case '6': std::cout << "Exitting."; exit(0);

		 }
	 }

 }

