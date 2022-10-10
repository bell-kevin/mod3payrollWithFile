// mod3payrollWithFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
string firstName, lastName;
double hourlyPayRate, hoursWorked, grossPay;
string continueProgram="y";
int counter;
double getHours(double hoursWorked);
double getGrossPay(double hourlyPayRate, double hoursWorked);
int main()
{
	ofstream outputFile;
	outputFile.open("payroll.txt");
    std::cout << "Module 3 Competency Project: Payroll with a File by Kevin Bell\n\n";
	while (continueProgram == "y" || continueProgram == "Y" || continueProgram == "Yes" || continueProgram == "YES" || continueProgram == "yes"){
		std::cout << "Enter employee's first name: ";
		std::cin >> firstName;
		std::cout << "Enter employee's last name: ";
		std::cin >> lastName;
		cout << "What is the employee's hourly pay rate? ";
		cin >> hourlyPayRate;
		counter++;
		outputFile << firstName << " " << lastName << " " << hourlyPayRate << endl;
		cout << "Continue with the program? (Y/N)";
		cin >> continueProgram;
	} // end while
	outputFile.close();
	cout << "Done writing to file" << endl;
	cout << "Reading data from file" << endl;
	ifstream inputFile;
	inputFile.open("payroll.txt");
	for (int count = 1; count <= counter; count++) {
		inputFile >> firstName;
		inputFile >> lastName;
		inputFile >> hourlyPayRate;
		cout << "Employee: " << firstName << " " << lastName << endl;
		getHours(hoursWorked);
	}
	cout << "Done reading from file" << endl;
	inputFile.close();
	system("pause");
	return 0;
	//write file output
	//read file input
	//while loop
	//input validation loop
	//if statements
	//functions
	//getHours
	//NoOverTime
	//getGrossPayCalculation
} // end main

double getHours(double hoursWorked) {
	while (hoursWorked < 0 || hoursWorked > 40) {
		cout << "Invalid number of hours. Please enter a number between 0 and 40: ";
		cin >> hoursWorked;
	}
	return hoursWorked;
}

double getGrossPay(double hourlyPayRate, double hoursWorked) {
		grossPay = hoursWorked * hourlyPayRate;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
