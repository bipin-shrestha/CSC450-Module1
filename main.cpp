/*
Name: 				Bipin Shrestha
Project Name: 		CSC450-CT1-Module1
Project Purpose: 	To create a interactive program that takes input from user and displays personal information.
Algorithm Used: 	Program has simple getline function to obtain the user information, stores in the variables and
					then prints the information using the 'cout' statements.
Program Inputs: 	Program require user input like FirstName, LastName, Street Address, city and zipcode.
Program Outputs: 	Program outputs the FirstName, LastName, StreetAddress, City, and ZipCode.
Program Limitations: The program expects zipcode to be integer value. If any non-integer value is entered then error may occur.
Program Errors: 	The program will encounter error if the user inputs non-integer value for the zipcode.

====================================
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	// Declare variables
	string FirstName, LastName, StreetAddress, City;
	int ZipCode;

	cout << "Enter Your FirstName : ";
	getline(cin, FirstName);
	cout << "Enter Your LastName : ";
	getline(cin, LastName);
	cout << "Enter Street Address : ";
	getline(cin, StreetAddress);
	cout << "Enter City : ";
	getline(cin, City);
	cout << "Enter Zip Code : ";
	cin >> ZipCode;
	// Print the Information
	cout << "\nPersonal Information \n";
	cout << "First Name : " << FirstName << "\n";
	cout << "Last Name : " << LastName << "\n";
	cout << "Street Address : " << StreetAddress << "\n";
	cout << "City : " << City << "\n";
	cout << "Zip Code : " << ZipCode << "\n";
	return 0;
}
