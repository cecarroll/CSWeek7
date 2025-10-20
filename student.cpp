//empty because i need it to build the makefile
#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "date.h"
#include "address.h"

		Student::Student(){
            firstName = "";
            lastName = "";
            completedCredits = 0;
        };
		Student::~Student(){
            // Destructor implementation
        };

		void Student::init(std::stringstream studentString){
            std::string token;

            std::getline(studentString, firstName, ',');
            std::getline(studentString, lastName, ',');

            std::getline(studentString, token, ',');
            //birthDate = Date(token);

            std::getline(studentString, token, ',');
            //expectedGraduationDate = Date(token);

            std::getline(studentString, token, ',');
            completedCredits = std::stoi(token);

            std::getline(studentString, token, ',');
            //homeAddress = Address(token);
        };
		void Student::printStudent(){
            std::cout << "Student Name: " << firstName << " " << lastName << std::endl;
            //std::cout << "Birth Date: " <<birthDate.printDate() << std::endl;
            //std::cout << "Expected Graduation Date: " << expectedGraduationDate.printDate() << std::endl;
            std::cout << "Completed Credits: " << completedCredits << std::endl;
            //std::cout << "Home Address: " << homeAddress.printAddress() << std::endl;
        };
		std::string Student::getFirstName(){
            return firstName;
        };
		std::string Student::getLastName(){
            return lastName;
        };
		int Student::getCompletedCredits(){
            return completedCredits;
        };

