#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "date.h"
#include "address.h"


class Student {
	private:
		std::string firstName;
		std::string lastName;

		Date birthDate;
		Date expectedGraduationDate;

		int completedCredits;
		
		Address homeAddress;
	
	public:
		Student();
		
		~Student();

		void init(std::stringstream studentString);
		void printStudent();
		std::string getFirstName();
		std::string getLastName();
		int getCompletedCredits();

}; //end student class 


#endif