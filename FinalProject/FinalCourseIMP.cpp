// implementation file: FinalCourseIMP.cpp
// 420-P16-AS STRUCTURED PROGRAMMING
// MAURICIO DIAS - STUDENT NUMBER: 1810396

#include "finalCourse.h"

//This is the MAIN LOGIN!
short getloginChoice()
{
	system("cls");
	cout << "\n\n\n\n\t\tOMNIVOX GRADE APPLICATION:";
	cout << "\n\n\t Choose one of the following: ";
	cout << "\n\t1. Teacher Login";
	cout << "\n\t2. Student Login";
	cout << "\n\t3. End Application";
	string tempChoice = "";
	do
	{
		cout << "\n\n\tEnter your number of choice(1,2 or 3): ";
		getline(cin, tempChoice);
		//cin.ignore();
		if (!(isValidInput(tempChoice, 1)))
		{
			cout << "\n\tInvalid choice.";
			system("pause>>null");
		}
	} while (!(isValidInput(tempChoice, 1)));
	int choice = stoi(tempChoice);
	/*cin.ignore();*/
	return choice;
}

//This are all functions for SWITCH on TEACHER'S LOGIN:

short getMenuChoice()
{
	system("cls");
	cout << "\n\n\n\n\t\tTEACHER'S MENU";
	cout << "\n\n\t1. List all current courses";
	cout << "\n\t2. Enter students grades of given courses";
	cout << "\n\t3. Search a student by the Student ID";
	cout << "\n\t4. Sort Student list by Student ID";
	cout << "\n\t5. List all students grades of a given course";
	cout << "\n\t6. Back to login menu";

	string tempChoice = "";
	do
	{
		cout << "\n\n\tEnter your choice(1,2,3,4 or 5): ";
		getline(cin, tempChoice);
		/*cin.ignore();*/
		if (!(isValidInput(tempChoice, 1)))
		{
			cout << "\n\tInvalid choice.";
		}
	} while (!(isValidInput(tempChoice, 1)));
	int choice = stoi(tempChoice);
	/*cin.ignore();*/
	return choice;
}
short getstudentChoice()
{
	system("cls");
	cout << "\n\n\n\n\t\tStudent Creation List:";
	cout << "\n\n\t Choose one of the following groups: ";
	cout << "\n\t1. 420-P16-AS  Structured Programming Group 7052 ";
	cout << "\n\t2. 420-P16-AS  Structured Programming Group 7154 ";
	cout << "\n\t3. 420-P65-AS  Internet Programming II group 7064 ";
	string tempChoice = "";
	do
	{
		cout << "\n\n\tEnter your number of choice(1,2 or 3): ";
		getline(cin, tempChoice);
		cin.ignore();
		if (!(isValidInput(tempChoice, 1)))
		{
			cout << "\n\tInvalid choice.";
			system("pause>>null");
		}
	} while (!(isValidInput(tempChoice, 1)));
	int choice = stoi(tempChoice);
	/*cin.ignore();*/
	return choice;
}

//This are all functions for SWITCH on STUDENT'S LOGIN:

short getStudentloginMenu()
{
	system("cls");
	cout << "\n\n\n\n\t\tSTUDENT'S LOGIN";
	cout << "\n\n\t Choose one of the following groups: ";
	cout << "\n\t1. 420-P16-AS  Structured Programming Group 7052 ";
	cout << "\n\t2. 420-P16-AS  Structured Programming Group 7154 ";
	cout << "\n\t3. 420-P65-AS  Internet Programming II group 7064 ";
	cout << "\n\t4. Quit the application ";

	string tempChoice = "";
	do
	{
		cout << "\n\n\tEnter your choice(1,2,3 or 4): ";
		getline(cin, tempChoice);
		cin.ignore();
		if (!(isValidInput(tempChoice, 1)))
		{
			cout << "\n\tInvalid choice.";
		}
	} while (!(isValidInput(tempChoice, 1)));
	int choice = stoi(tempChoice);
	/*cin.ignore();*/
	return choice;
}
short getStudentMenu()
{
	system("cls");
	cout << "\n\n\n\n\t\tSTUDENT'S MENU";
	cout << "\n\n\t1. List all your courses";
	cout << "\n\t2. View your grade for a given evaluation component (Midterm Exam, Final Project or final Exam)";
	cout << "\n\t3. List all your grades for the course ";
	cout << "\n\t4. Quit the application ";

	string tempChoice = "";
	do
	{
		cout << "\n\n\tEnter your choice(1,2,3 or 4): ";
		getline(cin, tempChoice);
		cin.ignore();
		if (!(isValidInput(tempChoice, 1)))
		{
			cout << "\n\tInvalid choice.";
		}
	} while (!(isValidInput(tempChoice, 1)));
	int choice = stoi(tempChoice);
	/*cin.ignore();*/
	return choice;
}
short getsepGradeChoice()
{
	system("cls");
	cout << "\n\n\n\n\t\tSTUDENT'S MINOR GRADES";
	cout << "\n\n\t Choose one of the following Grades: ";
	cout << "\n\t1. MidTerm Grade ";
	cout << "\n\t2. Project Grade ";
	cout << "\n\t3. Final Exam Grade ";
	cout << "\n\t4. Quit the application ";

	string tempChoice = "";
	do
	{
		cout << "\n\n\tEnter your choice(1,2,3 or 4): ";
		getline(cin, tempChoice);
		cin.ignore();
		if (!(isValidInput(tempChoice, 1)))
		{
			cout << "\n\tInvalid choice.";
		}
	} while (!(isValidInput(tempChoice, 1)));
	int choice = stoi(tempChoice);
	/*cin.ignore();*/
	return choice;
}

//This 3 functions are used to display the students group and course in the 1. OPTION from TEACHER'S MENU:
void displayStudentList(Student7052 arrstudent7052[], short howmany)
{
	cout << "\n\n\n" << setw(70) << " Courses & Students " << endl << endl;
	cout << setw(30) << "Course title" << setw(25) << "First Name" << setw(25) << "Last Name" << setw(25) << " Group Nun" << endl;
	cout << setw(30) << "============" << setw(25) << "==========" << setw(25) << "=========" << setw(25) << "=============" << endl;

	for (short i = 0; i < howmany; i++)
	{

		cout << setw(30) << arrstudent7052[i].coursetitle << setw(25) << arrstudent7052[i].firstName << setw(25) << arrstudent7052[i].lastName << setw(25) << arrstudent7052[i].group << endl;

	}

}
void displayStudentList(Student7154 arrStudent7154[], short howmany)
{
	for (short i = 0; i < howmany; i++)
	{

		cout << setw(30) << arrStudent7154[i].coursetitle << setw(25) << arrStudent7154[i].firstName << setw(25) << arrStudent7154[i].lastName << setw(25) << arrStudent7154[i].group << endl;

	}
}
void displayStudentList(Student7064 arrStudent7064[], short howmany)
{
	for (short i = 0; i < howmany; i++)
	{

		cout << setw(30) << arrStudent7064[i].coursetitle << setw(25) << arrStudent7064[i].firstName << setw(25) << arrStudent7064[i].lastName << setw(25) << arrStudent7064[i].group << endl;

	}
}

//This is the function to display ALL STUDENTS INFO TOGETTHER, The 5. OPTION from TEACHER'S MENU:
void displayAll(Student7052 arrStudent7052[], Student7154 arrStudent7154[], Student7064 arrStudent7064[], short howMany)
{

	short allPassed = 0;
	short allFailed = 0;

	cout << "\n\n" << setw(60) << "Course Number:" << arrStudent7052->courseNumber;
	cout << "\n" << setw(54) << "Course Title:" << arrStudent7052->coursetitle;
	cout << "\n" << setw(70) << "Teacher: Quang Hoang Cao";
	cout << "\n" << setw(68) << "Session: Winter 2018";
	cout << "\n" << setw(59) << "Group:" << arrStudent7052->group;
	cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
	cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
	cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
	for (short i = 0; i < howMany; i++)
	{
		cout << setw(15) << arrStudent7052[i].studentID << setw(25) << arrStudent7052[i].fullname << setw(25) << arrStudent7052[i].midTerm << setw(15) << arrStudent7052[i].Project << setw(15) << arrStudent7052[i].finalG << setw(15) << arrStudent7052[i].totalgrade << endl;
		if (arrStudent7052[i].totalgrade >= 60)
		{
			allPassed = allPassed + 1;
		}
		if (arrStudent7052[i].totalgrade < 60 && arrStudent7052[i].totalgrade != 0)
		{
			allFailed = allFailed + 1;
		}
	}

	cout << "\n\n" << setw(60) << "Course Number:" << arrStudent7154->courseNumber;
	cout << "\n" << setw(54) << "Course Title:" << arrStudent7154->coursetitle;
	cout << "\n" << setw(70) << "Teacher: Quang Hoang Cao";
	cout << "\n" << setw(68) << "Session: Winter 2018";
	cout << "\n" << setw(59) << "Group:" << arrStudent7154->group;
	cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
	cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
	cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
	for (short i = 0; i < howMany; i++)
	{
	cout << setw(15) << arrStudent7154[i].studentID << setw(25) << arrStudent7154[i].fullname << setw(25) << arrStudent7154[i].midTerm << setw(15) << arrStudent7154[i].Project << setw(15) << arrStudent7154[i].finalG << setw(15) << arrStudent7154[i].totalgrade << endl;
	if (arrStudent7154[i].totalgrade >= 60)
	{
		allPassed = allPassed + 1;
	}
	if (arrStudent7154[i].totalgrade < 60 && arrStudent7154[i].totalgrade != 0)
	{
		allFailed = allFailed + 1;
	}
	}

	cout << "\n\n" << setw(60) << "Course Number:" << arrStudent7064->courseNumber;
	cout << "\n" << setw(54) << "Course Title:" << arrStudent7064->coursetitle;
	cout << "\n" << setw(70) << "Teacher: Quang Hoang Cao";
	cout << "\n" << setw(68) << "Session: Winter 2018";
	cout << "\n" << setw(59) << "Group:" << arrStudent7064->group;
	cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
	cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
	cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
	for (short i = 0; i < howMany; i++)
	{
		cout << setw(15) << arrStudent7064[i].studentID << setw(25) << arrStudent7064[i].fullname << setw(25) << arrStudent7064[i].midTerm << setw(15) << arrStudent7064[i].Project << setw(15) << arrStudent7064[i].finalG << setw(15) << arrStudent7064[i].totalgrade << endl;
		if (arrStudent7064[i].totalgrade >= 60)
		{
			allPassed = allPassed + 1;
		}
		if (arrStudent7064[i].totalgrade < 60 && arrStudent7064[i].totalgrade != 0)
		{
			allFailed = allFailed + 1;
		}
	}

	cout << "\n" << setw(60) << "Number of students that Passed: " << allPassed;
	cout << "\n" << setw(60) << "Number of students that Failed: " << allFailed;

	system("pause>>null");

}

//This is the function to search students, The 3. OPTION from TEACHER'S MENU:
void searchStudents(Student7052 arrStudent7052[], Student7154 arrStudent7154[], Student7064 arrStudent7064[], short howMany, int studentID)
{
	bool found = false;
	for (int i = 0; i < howMany; i++)
	{
		if (studentID == arrStudent7052[i].studentID)
		{
		    cout << "\n\n" << setw(60) << "Course Number:" << arrStudent7052->courseNumber;
			cout << "\n" << setw(54) << "Course Title:" << arrStudent7052->coursetitle;
			cout << "\n" << setw(70) << "Teacher: Quang Hoang Cao";
			cout << "\n" << setw(68) << "Session: Winter 2018";
			cout << "\n" << setw(59) << "Group:" << arrStudent7052->group;
		    cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
			cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
			cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
			cout << setw(15) << arrStudent7052[i].studentID << setw(25) << arrStudent7052[i].fullname << setw(25) << arrStudent7052[i].midTerm << setw(15) << arrStudent7052[i].Project << setw(15) << arrStudent7052[i].finalG << setw(15) << arrStudent7052[i].totalgrade << endl;

			found = true;
			break;
		}
		if ((studentID == arrStudent7154[i].studentID))
		{
			cout << "\n\n" << setw(60) << "Course Number:" << arrStudent7154->courseNumber;
			cout << "\n" << setw(54) << "Course Title:" << arrStudent7154->coursetitle;
			cout << "\n" << setw(70) << "Teacher: Quang Hoang Cao";
			cout << "\n" << setw(68) << "Session: Winter 2018";
			cout << "\n" << setw(59) << "Group:" << arrStudent7154->group;
			cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
			cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
			cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
			cout << setw(15) << arrStudent7154[i].studentID << setw(25) << arrStudent7154[i].fullname << setw(25) << arrStudent7154[i].midTerm << setw(15) << arrStudent7154[i].Project << setw(15) << arrStudent7154[i].finalG << setw(15) << arrStudent7154[i].totalgrade << endl;

			found = true;
			break;
		}
		if ((studentID == arrStudent7064[i].studentID))
		{

			cout << "\n\n" << setw(60) << "Course Number:" << arrStudent7064->courseNumber;
			cout << "\n" << setw(54) << "Course Title:" << arrStudent7064->coursetitle;
			cout << "\n" << setw(70) << "Teacher: Quang Hoang Cao";
			cout << "\n" << setw(68) << "Session: Winter 2018";
			cout << "\n" << setw(59) << "Group:" << arrStudent7064->group;
			cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
			cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
			cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
			cout << setw(15) << arrStudent7064[i].studentID << setw(25) << arrStudent7064[i].fullname << setw(25) << arrStudent7064[i].midTerm << setw(15) << arrStudent7064[i].Project << setw(15) << arrStudent7064[i].finalG << setw(15) << arrStudent7064[i].totalgrade << endl;

			found = true;
			break;
		}


	}
	if (!found)
	{
		cout << "\n\tInvalid Student ID.";
	}
}

//This is the function to SORT students by descending order, The 4. OPTION from TEACHER'S MENU:
void sortStudents(Student7052 arrStudent7052[], Student7154 arrStudent7154[], Student7064 arrStudent7064[], short howMany)
{
	for (int i = 0; i < howMany - 1; i++)
	{
		for (int j = i + 1; j < howMany; j++)
		{
			if (arrStudent7052[i].studentID > arrStudent7052[j].studentID)
			{
				Student7052 temp = arrStudent7052[i];
				arrStudent7052[i] = arrStudent7052[j];
				arrStudent7052[j] = temp;
			}

			if (arrStudent7154[i].studentID > arrStudent7154[j].studentID)
			{
				Student7154 temp = arrStudent7154[i];
				arrStudent7154[i] = arrStudent7154[j];
				arrStudent7154[j] = temp;
			}

			if (arrStudent7064[i].studentID > arrStudent7064[j].studentID)
			{
				Student7064 temp = arrStudent7064[i];
				arrStudent7064[i] = arrStudent7064[j];
				arrStudent7064[j] = temp;
			}
		}
	}
}

//Functions to CREATE the students INFO:
void createStudentGroupList(Student7052 arrStudent7052[], short howMany)
{
	// Note : validation functions need to be called
	for (short i = 0; i < howMany; i++)
	{
		string tempInput = "";
		do
		{
			cout << "\n\n\tEnter the Student ID : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput, 7)))
			{
				cout << "\n\tInvalid Student ID ";
			}

		} while (!(isValidInput(tempInput, 7)));
		arrStudent7052[i].studentID = stoi(tempInput);


		cout << "\n\tEnter the  Student Password : ";
		getline(cin, tempInput);
		arrStudent7052[i].studentPass = tempInput;

		do
		{
			cout << "\n\tEnter the  first name : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput)))
			{
				cout << "\n\tInvalid first name.";
			}

		} while (!(isValidInput(tempInput)));
		arrStudent7052[i].firstName = tempInput;

		do
		{
			cout << "\n\tEnter the last name : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput)))
			{
				cout << "\n\tInvalid last name.";
			}
		} while (!(isValidInput(tempInput)));
		arrStudent7052[i].lastName = tempInput;

		arrStudent7052[i].fullname = arrStudent7052[i].firstName + " , " + arrStudent7052[i].lastName;

		do
		{
			cout << "\n\tEnter Midterm grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7052[i].midTerm = stof(tempInput);
		do
		{
			cout << "\n\tEnter Project grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7052[i].Project = stof(tempInput);
		do
		{
			cout << "\n\tEnter Final grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7052[i].finalG = stof(tempInput);

		arrStudent7052[i].totalgrade = round(calculateTotalGrade(arrStudent7052[i].midTerm, arrStudent7052[i].Project, arrStudent7052[i].finalG));
	}

}
void createStudentGroupList(Student7154 arrStudent7154[], short howMany)
{
	// Note : validation functions need to be called
	for (short i = 0; i < howMany; i++)
	{
		string tempInput = "";
		do
		{
			cout << "\n\n\tEnter the Student ID : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput, 7)))
			{
				cout << "\n\tInvalid Student ID ";
			}

		} while (!(isValidInput(tempInput, 7)));
		arrStudent7154[i].studentID = stoi(tempInput);

		cout << "\n\tEnter the  Student Password : ";
		getline(cin, tempInput);
		arrStudent7154[i].studentPass = tempInput;

		do
		{
			cout << "\n\tEnter the  first name : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput)))
			{
				cout << "\n\tInvalid first name.";
			}

		} while (!(isValidInput(tempInput)));
		arrStudent7154[i].firstName = tempInput;

		do
		{
			cout << "\n\tEnter the last name : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput)))
			{
				cout << "\n\tInvalid last name.";
			}
		} while (!(isValidInput(tempInput)));
		arrStudent7154[i].lastName = tempInput;

		arrStudent7154[i].fullname = arrStudent7154[i].firstName + " , " + arrStudent7154[i].lastName;

		do
		{
			cout << "\n\tEnter Midterm grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7154[i].midTerm = stof(tempInput);
		do
		{
			cout << "\n\tEnter Project grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7154[i].Project = stof(tempInput);
		do
		{
			cout << "\n\tEnter Final grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7154[i].finalG = stof(tempInput);

		arrStudent7154[i].totalgrade = round(calculateTotalGrade(arrStudent7154[i].midTerm, arrStudent7154[i].Project, arrStudent7154[i].finalG));
	}
}
void createStudentGroupList(Student7064 arrStudent7064[], short howMany)
{
	// Note : validation functions need to be called
	for (short i = 0; i < howMany; i++)
	{
		string tempInput = "";
		do
		{
			cout << "\n\n\tEnter the Student ID : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput, 7)))
			{
				cout << "\n\tInvalid Student ID ";
			}

		} while (!(isValidInput(tempInput, 7)));
		arrStudent7064[i].studentID = stoi(tempInput);

		cout << "\n\tEnter the  Student Password : ";
		getline(cin, tempInput);
		arrStudent7064[i].studentPass = tempInput;

		do
		{
			cout << "\n\tEnter the  first name : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput)))
			{
				cout << "\n\tInvalid first name.";
			}

		} while (!(isValidInput(tempInput)));
		arrStudent7064[i].firstName = tempInput;

		do
		{
			cout << "\n\tEnter the last name : ";
			getline(cin, tempInput);
			if (!(isValidInput(tempInput)))
			{
				cout << "\n\tInvalid last name.";
			}
		} while (!(isValidInput(tempInput)));
		arrStudent7064[i].lastName = tempInput;

		arrStudent7064[i].fullname = arrStudent7064[i].firstName + " , " + arrStudent7064[i].lastName;

		do
		{
			cout << "\n\tEnter Midterm grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7064[i].midTerm = stof(tempInput);
		do
		{
			cout << "\n\tEnter Project grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7064[i].Project = stof(tempInput);
		do
		{
			cout << "\n\tEnter Final grade (up to 100.00) : ";
			getline(cin, tempInput);
			if (!isValidGrade(tempInput))
			{
				cout << "\n\tInvalid Grade.";
			}
		} while (!isValidGrade(tempInput));
		arrStudent7064[i].finalG = stof(tempInput);

		arrStudent7064[i].totalgrade = round(calculateTotalGrade(arrStudent7064[i].midTerm, arrStudent7064[i].Project, arrStudent7064[i].finalG));
	}

}

//student login and login menu from group 7052
void studentLogin7052(Student7052 arrStudent7052[], int howmany)
{
	
	
	bool id = true;
	bool passw = true;
	short studnum = 0;

	do
	{
		
		int tempID = 0;

		cout << "\n\n\t Enter Student ID:";
		cin >> tempID;
		cin.ignore();
		if (tempID == arrStudent7052[0].studentID)
		{
				studnum = 0;
				id = false;
				break;
		}
		if (tempID == arrStudent7052[1].studentID)
		{
				studnum = 1;
				id = false;
				break;
		}
		else
		{

			cout << "\n\t\tWrong ID, try again.";
			cout << "\n\t" << arrStudent7052[0].studentID;
			cout << "\n\t" << arrStudent7052[1].studentID;
			system("pause>>null");
		}


	} while (id == true);

	do
	{
		string tempPass = "";
		cout << "\n\n\tEnter the Student Password : ";
		getline(cin, tempPass);
		cin.ignore();
		if (tempPass == arrStudent7052[studnum].studentPass )
		{
			passw = false;
			break;
		}
		if (tempPass != arrStudent7052[studnum].studentPass)
		{
			cout << "\n\t\tWrong Password, try again.";
			cout << "\n\t" << arrStudent7052[studnum].studentPass;
		}

	} while (passw == true);

	studentLoginMenu7052(arrStudent7052, studnum);
	
} //
void studentLoginMenu7052(Student7052 arrStudent7052[], short whoisit)
{
	bool studentmenu7052 = true;
	bool separateGrade = true;
	do
	{
		int studLoginMenu = getStudentMenu();

		switch (studLoginMenu)
		{
		case 1:cout << "\n\n\t1. List all your courses";
			cout << "\n\n\n" << setw(70) << " Courses & Students " << endl << endl;
			cout << setw(30) << "Course title" << setw(25) << "First Name" << setw(25) << "Last Name" << setw(25) << " Group Nun" << endl;
			cout << setw(30) << "============" << setw(25) << "==========" << setw(25) << "=========" << setw(25) << "=============" << endl;
			cout << setw(30) << arrStudent7052[whoisit].coursetitle << setw(25) << arrStudent7052[whoisit].firstName << setw(25) << arrStudent7052[whoisit].lastName << setw(25) << arrStudent7052[whoisit].group << endl;
			system("pause>>null");

			break;
		case 2:cout << "\n\t2. View your grade for a given evaluation component (Midterm Exam, Final Project or final Exam)";
			separateGrade = true;
			do
			{
				
				short optGrade = getsepGradeChoice();

				switch (optGrade)
				{
				case 1:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << endl;
					cout << setw(15) << arrStudent7052[whoisit].studentID << setw(25) << arrStudent7052[whoisit].fullname << setw(25) << arrStudent7052[whoisit].midTerm << endl;
					system("pause>>null");
					break;
				case 2:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Project" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << endl;
					cout << setw(15) << arrStudent7052[whoisit].studentID << setw(25) << arrStudent7052[whoisit].fullname << setw(25) << arrStudent7052[whoisit].Project << endl;
					system("pause>>null");
					break;
				case 3:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Final Exam" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "==========" << endl;
					cout << setw(15) << arrStudent7052[whoisit].studentID << setw(25) << arrStudent7052[whoisit].fullname << setw(25) << arrStudent7052[whoisit].finalG << endl;
					system("pause>>null");
					break;
				case 4:
					separateGrade = false;
					break;

				}

			} while (separateGrade == true);
			system("pause>>null");
			break;
		case 3:cout << "\n\t3. List all your grades for the course ";
			cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
			cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
			cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
			cout << setw(15) << arrStudent7052[whoisit].studentID << setw(25) << arrStudent7052[whoisit].fullname << setw(25) << arrStudent7052[whoisit].midTerm << setw(15) << arrStudent7052[whoisit].Project << setw(15) << arrStudent7052[whoisit].finalG << setw(15) << arrStudent7052[whoisit].totalgrade << endl;
			system("pause>>null");
			break;
		case 4:cout << "\n\t4. Quit the application ";
			studentmenu7052 = false;
			break;
		}


	} while (studentmenu7052 == true);
}

//student login and login menu from group 7154
void studentLogin7154(Student7154 arrStudent7154[], int howmany)
{
	int tempID = 0;
	string tempPass = "";
	bool id = true;
	bool passw = true;
	short studnum = 0;
	do
	{

		int tempID = 0;

		cout << "\n\n\t Enter Student ID:";
		cin >> tempID;
		cin.ignore();
		if (tempID == arrStudent7154[0].studentID)
		{
			studnum = 0;
			id = false;
			break;
		}
		if (tempID == arrStudent7154[1].studentID)
		{
			studnum = 1;
			id = false;
			break;
		}
		else
		{

			cout << "\n\t\tWrong ID, try again.";
			cout << "\n\tHint: " << arrStudent7154[0].studentID;
			cout << "\n\tHint: " << arrStudent7154[1].studentID;
			system("pause>>null");
		}


	} while (id == true);

	do
	{
		string tempPass = "";
		cout << "\n\n\tEnter the Student Password : ";
		getline(cin, tempPass);
		cin.ignore();
		if (tempPass == arrStudent7154[studnum].studentPass)
		{
			passw = false;
			break;
		}
		if (tempPass != arrStudent7154[studnum].studentPass)
		{
			cout << "\n\t\tWrong Password, try again.";
			cout << "\n\tHint: " << arrStudent7154[studnum].studentPass;
		}

	} while (passw == true);

	studentLoginMenu7154(arrStudent7154, studnum);

}
void studentLoginMenu7154(Student7154 arrStudent7154[], short whoisit)
{
	bool studentmenu7154 = true;
	bool separateGrade = true;
	do
	{
		int studLoginMenu = getStudentMenu();

		switch (studLoginMenu)
		{
		case 1:cout << "\n\n\t1. List all your courses";
			cout << "\n\n\n" << setw(70) << " Courses & Students " << endl << endl;
			cout << setw(30) << "Course title" << setw(25) << "First Name" << setw(25) << "Last Name" << setw(25) << " Group Nun" << endl;
			cout << setw(30) << "============" << setw(25) << "==========" << setw(25) << "=========" << setw(25) << "=============" << endl;
			cout << setw(30) << arrStudent7154[whoisit].coursetitle << setw(25) << arrStudent7154[whoisit].firstName << setw(25) << arrStudent7154[whoisit].lastName << setw(25) << arrStudent7154[whoisit].group << endl;
			system("pause>>null");

			break;
		case 2:cout << "\n\t2. View your grade for a given evaluation component (Midterm Exam, Final Project or final Exam)";
			separateGrade = true;
			do
			{
				
				short optGrade = getsepGradeChoice();

				switch (optGrade)
				{
				case 1:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << endl;
					cout << setw(15) << arrStudent7154[whoisit].studentID << setw(25) << arrStudent7154[whoisit].fullname << setw(25) << arrStudent7154[whoisit].midTerm << endl;
					system("pause>>null");
					break;
				case 2:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Project" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << endl;
					cout << setw(15) << arrStudent7154[whoisit].studentID << setw(25) << arrStudent7154[whoisit].fullname << setw(25) << arrStudent7154[whoisit].Project << endl;
					system("pause>>null");
					break;
				case 3:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Final Exam" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "==========" << endl;
					cout << setw(15) << arrStudent7154[whoisit].studentID << setw(25) << arrStudent7154[whoisit].fullname << setw(25) << arrStudent7154[whoisit].finalG << endl;
					system("pause>>null");
					break;
				case 4:
					separateGrade = false;
					break;

				}

			} while (separateGrade == true);
			system("pause>>null");
			break;
		case 3:cout << "\n\t3. List all your grades for the course ";
			cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
			cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
			cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
			cout << setw(15) << arrStudent7154[whoisit].studentID << setw(25) << arrStudent7154[whoisit].fullname << setw(25) << arrStudent7154[whoisit].midTerm << setw(15) << arrStudent7154[whoisit].Project << setw(15) << arrStudent7154[whoisit].finalG << setw(15) << arrStudent7154[whoisit].totalgrade << endl;
			system("pause>>null");
			break;
		case 4:cout << "\n\t4. Quit the application ";
			studentmenu7154 = false;
			break;
		}


	} while (studentmenu7154 == true);
}

//student login and login menu from group 7064
void studentLogin7064(Student7064 arrStudent7064[], int howmany)
{
	int tempID = 0;
	string tempPass = "";
	bool id = true;
	bool passw = true;
	short studnum = 0;

	do
	{

		int tempID = 0;

		cout << "\n\n\t Enter Student ID:";
		cin >> tempID;
		cin.ignore();
		if (tempID == arrStudent7064[0].studentID)
		{
			studnum = 0;
			id = false;
			break;
		}
		if (tempID == arrStudent7064[1].studentID)
		{
			studnum = 1;
			id = false;
			break;
		}
		else
		{

			cout << "\n\t\tWrong ID, try again.";
			cout << "\n\tHint: " << arrStudent7064[0].studentID;
			cout << "\n\tHint: " << arrStudent7064[1].studentID;
			system("pause>>null");
		}


	} while (id == true);

	do
	{
		string tempPass = "";
		cout << "\n\n\tEnter the Student Password : ";
		getline(cin, tempPass);
		cin.ignore();
		if (tempPass == arrStudent7064[studnum].studentPass)
		{
			passw = false;
			break;
		}
		if (tempPass != arrStudent7064[studnum].studentPass)
		{
			cout << "\n\t\tWrong Password, try again.";
			cout << "\n\tHint: " << arrStudent7064[studnum].studentPass;
		}

	} while (passw == true);

	studentLoginMenu7064(arrStudent7064, studnum);

}
void studentLoginMenu7064(Student7064 arrStudent7064[], short whoisit)
{
	bool studentmenu7064 = true;
	bool separateGrade = true;
	do
	{
		int studLoginMenu = getStudentMenu();

		switch (studLoginMenu)
		{
		case 1:cout << "\n\n\t1. List all your courses";
			cout << "\n\n\n" << setw(70) << " Courses & Students " << endl << endl;
			cout << setw(30) << "Course title" << setw(25) << "First Name" << setw(25) << "Last Name" << setw(25) << " Group Nun" << endl;
			cout << setw(30) << "============" << setw(25) << "==========" << setw(25) << "=========" << setw(25) << "=============" << endl;
			cout << setw(30) << arrStudent7064[whoisit].coursetitle << setw(25) << arrStudent7064[whoisit].firstName << setw(25) << arrStudent7064[whoisit].lastName << setw(25) << arrStudent7064[whoisit].group << endl;
			system("pause>>null");

			break;
		case 2:cout << "\n\t2. View your grade for a given evaluation component (Midterm Exam, Final Project or final Exam)";
			do
			{
				separateGrade = true;
				short optGrade = getsepGradeChoice();

				switch (optGrade)
				{
				case 1:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << endl;
					cout << setw(15) << arrStudent7064[whoisit].studentID << setw(25) << arrStudent7064[whoisit].fullname << setw(25) << arrStudent7064[whoisit].midTerm << endl;
					system("pause>>null");
					break;
				case 2:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Project" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << endl;
					cout << setw(15) << arrStudent7064[whoisit].studentID << setw(25) << arrStudent7064[whoisit].fullname << setw(25) << arrStudent7064[whoisit].Project << endl;
					system("pause>>null");
					break;
				case 3:
					cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Final Exam" << endl;
					cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "==========" << endl;
					cout << setw(15) << arrStudent7064[whoisit].studentID << setw(25) << arrStudent7064[whoisit].fullname << setw(25) << arrStudent7064[whoisit].finalG << endl;
					system("pause>>null");
					break;
				case 4:
					separateGrade = false;
					break;

				}

			} while (separateGrade == true);
			system("pause>>null");
			break;
		case 3:cout << "\n\t3. List all your grades for the course ";
			cout << "\n\n" << setw(67) << "ASSESSEMENT SUMMARY" << endl << endl;
			cout << setw(15) << "Student ID" << setw(25) << "   Student Name   " << setw(25) << "Midterm" << setw(15) << "Project" << setw(15) << "Final Exam" << setw(15) << "Final Result" << endl;
			cout << setw(15) << "==========" << setw(25) << "==================" << setw(25) << "=======" << setw(15) << "=======" << setw(15) << "==========" << setw(15) << "============" << endl;
			cout << setw(15) << arrStudent7064[whoisit].studentID << setw(25) << arrStudent7064[whoisit].fullname << setw(25) << arrStudent7064[whoisit].midTerm << setw(15) << arrStudent7064[whoisit].Project << setw(15) << arrStudent7064[whoisit].finalG << setw(15) << arrStudent7064[whoisit].totalgrade << endl;
			system("pause>>null");
			break;
		case 4:cout << "\n\t4. Quit the application ";
			studentmenu7064 = false;
			break;
		}


	} while (studentmenu7064 == true);
}

//Caluculation of total grade :
float calculateTotalGrade(float mid, float proj, float finalG)
{
	const float GRADE1 = 0.30f;
	const float GRADE2 = 0.40f;

	float TGRADE = 0.00f;

	TGRADE = (mid * GRADE1) + (proj * GRADE1) + (finalG * GRADE2);

	return TGRADE;

}

// Data validation functions:
bool isValidInput(string input, short size)
{
	//ckeck the size
	if (input.length() != size)
	{
		return false; // invalid input
	}
	for (int i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
		{
			return false; // invalid input
		}
	}

	return true; // valid input
}
bool teacherlogin(string teacherPass, string teacherUser)
{
	
	string tempUser = "";
	string tempTeacher = "";
	bool user = true;
	bool pass = true;

	do
	{
		cout << "\n\n\t Enter Teacher Username:";
		getline(cin, tempUser);
		//cin.ignore();
		if (tempUser != teacherUser)
		{
			cout << "\n\n\t Wrong Username";

		}
		else
		{
			user = false;
		}

	} while (user == true);

	do
	{
		cout << "\n\n\t Enter Teacher Password:";
		cin >> tempTeacher;

		if (tempTeacher != teacherPass)
		{
			cout << "\n\n\t Wrong Password";

		}
		else
		{
			pass = false;
		}

	} while (pass == true);



	return true;
}
bool isValidInput(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (!isalpha(input[i]) && (input[i] != ' '))
		{
			return false;
		}
	}
	return true;

}
bool isValidGrade(string input)
{
	if (input.length() > 5) // maximum = 99.99 (5 characters counting the '.')
	{
		return false; // invalid input
	}
	for (int i = 0; i < input.length(); i++)
	{
		if ((!isdigit(input[i])) && (input[i] != '.'))
		{
			return false;
		}
	}
	return true;
}