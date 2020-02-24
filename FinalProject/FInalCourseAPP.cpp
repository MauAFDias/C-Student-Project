// Aplication file for the program.
// 420-P16-AS STRUCTURED PROGRAMMING
// MAURICIO DIAS - STUDENT NUMBER: 1810396

#include "finalCourse.h"

int main()
{
	const short SIZE = 2;
	Student7052 arrStudent7052[SIZE];
	Student7154 arrStudent7154[SIZE];
	Student7064 arrStudent7064[SIZE];
	bool login = true;
	bool menu5 = true;
	bool studentlist = true;

	bool menustud = true;

	do
	{
		int option = getloginChoice();
		string teacher = "5257";
		string teacherpass = "quanghoang";

		//int studID = 0;
		//string studPass = "";

		switch (option)
		{
		case 1: cout << "\n\n\t Teachers login:";

			teacherlogin(teacherpass, teacher);
			do
			{
				int optionmenu = getMenuChoice();
				int studentIDD = 0;
				menu5 = true;
				switch (optionmenu)
				{
				case 1: cout << "\n\n\t1. List all current courses";
					displayStudentList(arrStudent7052, SIZE);
					displayStudentList(arrStudent7154, SIZE);
					displayStudentList(arrStudent7064, SIZE);
					system("pause>>null");
					break;
				case 2: cout << "\n\t2. Enter students grades of given courses";

					do
					{

						int studentopt = getstudentChoice(); // here is to choose which course the teacher wants to add students

						switch (studentopt)
						{
						case 1:
							createStudentGroupList(arrStudent7052, SIZE);
							studentlist = false;
							break;
						case 2:
							createStudentGroupList(arrStudent7154, SIZE);
							studentlist = false;
							break;
						case 3:
							createStudentGroupList(arrStudent7064, SIZE);
							studentlist = false;
							break;

						}
					} while (studentlist == true);


					break;
				case 3: cout << "\n\t3. Search a student by the Student ID";
					cout << "\n\tEnter Student ID: ";
					cin >> studentIDD;
					searchStudents(arrStudent7052, arrStudent7154, arrStudent7064, SIZE, studentIDD);
					system("pause>>null");
					break;
				case 4: cout << "\n\t4. Sort Student list by Student ID";
					sortStudents(arrStudent7052, arrStudent7154, arrStudent7064, SIZE);
					break;
				case 5: cout << "\n\t5. List all students grades of a given course";
					displayAll(arrStudent7052, arrStudent7154, arrStudent7064, SIZE);
					break;
				case 6: cout << "\n\t6. Back to login menu";
					menu5 = false;
					break;
				}

			} while (menu5 == true);
			break;
		case 2: cout << "\n\n\t Students login:";
			do
			{
				menustud = true;
				int studlogin = getStudentloginMenu();

				switch (studlogin)
				{
				case 1:
					studentLogin7052(arrStudent7052, SIZE);
					break;
				case 2:
					studentLogin7154(arrStudent7154, SIZE);
					break;
				case 3:
					studentLogin7064(arrStudent7064, SIZE);
					break;
				case 4:
					menustud = false;
					break;

				}


			} while (menustud == true);


			break;
		case 3: cout << "\n\n\t End Application:";
			login = false;
			break;
		}

	} while (login == true);


	cout << "\n\n\t THANK YOU FOR YOUR TIME, Bye Bye!";
	system("pause>>null");
	return 0;
}