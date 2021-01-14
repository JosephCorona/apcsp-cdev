#include <stdio.h>
#include <string.h>


// student structure
//struct Student...
struct Student{
	char firstName[50];
	char lastName[50];
	int age;
	int studentID;
};

void printStudent(struct Student* students)
{
printf("Student:\n");
printf("  First Name: %s\n", students->firstName);
printf("  Last Name: %s\n", students->lastName);
printf("  Age: %d\n", students->age);
printf("  ID: %d\n", students->studentID);
}

void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
//for(int i = 0; i < num; i++)
//{
printStudent(students);
//}
}

int main()
{

  // an array of students
  //xxx students;
  int numStudents = 0;
  struct Student students[numStudents];

char input[256];
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q')
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student

      numStudents++;
struct Student students[numStudents];
char inputA[256];
printf("First name:\n");
fgets(inputA, 256, stdin);
sscanf(inputA, "%s", students[numStudents].firstName);

printf("Last name:\n");
fgets(inputA, 256, stdin);
sscanf(inputA, "%s", students[numStudents].lastName);

printf("Age:\n");
while (1)
{
fgets(inputA, 256, stdin);
if (sscanf(input, "%d", &students[numStudents].age) == 1) break;
printf("Not a valid age\n");
}

printf("Student ID:\n");
while (1)
{
fgets(inputA, 256, stdin);
if (sscanf(input, "%d", &students[numStudents].studentID) == 1) break;
printf("Not a valid ID\n");
}
    }
  }

  printf("\nGoodbye!\n");
}
