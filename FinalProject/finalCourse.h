// Declaration File : finalCourse.h
// 420-P16-AS STRUCTURED PROGRAMMING
// MAURICIO DIAS - STUDENT NUMBER: 1810396

#ifndef FINALCOURSE_H
#define FINALCOURSE_H
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>

using namespace std;

//structure declarations - these will be all the students, divided by groups
struct Student7052
{
	string coursetitle = "Structured Programming";
	string courseNumber = "420-P16-AS";
	string group = "7052";

	int studentID = 0;
	string studentPass = "";
	string firstName = "";
	string lastName = "";
	string fullname = "";
	float midTerm = 0.00f;
	float Project = 0.00f;
	float finalG = 0.00f;
	float totalgrade = 0.00f;

};
struct Student7154
{
	string coursetitle = "Structured Programming";
	string courseNumber = "420-P16-AS";
	string group = "7154";

	int studentID = 0;
	string studentPass = "";
	string firstName = "";
	string lastName = "";
	string fullname = "";
	float midTerm = 0.00f;
	float Project = 0.00f;
	float finalG = 0.00f;
	float totalgrade = 0.00f;

};
struct Student7064
{
	string coursetitle = "Internet Programming II";
	string courseNumber = "420-P65-AS";
	string group = "7064";

	int studentID = 0;
	string studentPass = "";
	string firstName = "";
	string lastName = "";
	string fullname = "";
	float midTerm = 0.00f;
	float Project = 0.00f;
	float finalG = 0.00f;
	float totalgrade = 0.00f;

};

//ALL FUNCTIONS ARE SEPARED AND EXPLAINED ON IMP FILE!

// Function Prototypes(Declaration)

void createStudentGroupList(Student7052[], short);
void createStudentGroupList(Student7154[], short);
void createStudentGroupList(Student7064[], short);

void searchStudents(Student7052[], Student7154[], Student7064[], short, int);

void sortStudents(Student7052[], Student7154[], Student7064[], short);

void displayStudentList(Student7052[], short);
void displayStudentList(Student7154[], short);
void displayStudentList(Student7064[], short);

void displayAll(Student7052[], Student7154[], Student7064[], short);

void studentLogin7052(Student7052[], int);
void studentLogin7154(Student7154[], int);
void studentLogin7064(Student7064[], int);

void studentLoginMenu7052(Student7052[], short);
void studentLoginMenu7154(Student7154[], short);
void studentLoginMenu7064(Student7064[], short);

float calculateTotalGrade(float, float, float);

short getloginChoice();
short getMenuChoice();
short getstudentChoice();
short getStudentMenu();
short getStudentloginMenu();
short getsepGradeChoice();

// Function data Validation Prototypes(Declaration)

bool isValidInput(string, short);
bool teacherlogin(string, string);
bool isValidInput(string);
bool isValidGrade(string);
#endif