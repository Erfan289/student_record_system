#include "admin.h"
#include "program.h"

static void addNewStudent(){
char name[100];
    char student_password[20];
    int student_id,gender,age,grade;
    printf("Enter Student's Name:");
    scanf("%s",&name);
    printf("Enter the Student's ID:");
    scanf("%d",&student_id);
    printf("Enter Student's Password:");
    scanf("%s",&student_password);
    printf("What is the Student's Gender? -1 for Female/2 for Male-");
    scanf("%d",&gender);
    printf("Enter the Student's Age:");
    scanf("%d",&age);
    printf("Enter the Student's Grade:");
    scanf("%d",&grade);
    addStudent(name,student_password,grade,student_id,age,gender);

}

static void deleteStudent(){

int student_id;
    printf("Enter the ID of the Student you want to remove:");
    scanf("%d",&student_id);
    removeStudent(student_id);
}
static void showStudentRecords()
{

    int student_id;
    printf("Enter Student's ID whom you want to show his record:");
    scanf("%d",&student_id);
    printf("The Student's Records:\n");
    viewStudentRecord(student_id);
}
static void editAdminPassword()
{
     char admin_password[20];
    char new_admin_password[20];
    int decision;
    printf("Enter your current password:\n")
    scanf("%d",&admin_password);
    printf("Enter your new password:");
    scanf("%s",&new_admin_password);
    printf("Enter 1 to change your password and 0 to cancel.");
    scanf("%d",&decision);
    AdminPassword(new_admin_password,decision);
}
static void editStudentGrade()
{
    int student_id,new_grade;
    printf("Enter the Student's ID:\n");
    scanf("%d",&student_id);
    printf("Enter the Student's new grade:");
    scanf("%d",&new_grade);
    editGrade(new_grade,student_id);
}

void admin_mode(){
int option_number;
printf("1. Add Student Record\n");
printf("2. Remove Student Record\n");
printf("3. View Student Record\n");
printf("4. View All Student Records\n");
printf("5. Edit Admin Password\n");
printf("6. Edit Student Grade\n");
printf("7. Back to mode selection\n");
printf("Enter the number of the option you want:");
scanf("%d",&option_number);

if(option_number==1)
{
    addNewStudent();
    }
else if(option_number==2)
{
    deleteStudent();
}
else if(option_number==3)
{
    showStudentRecords();
}
else if(option_number==4)
{
    printf("All Students Records:\n");
    viewAllRecords();

}
else if(option_number==5)
{
    editAdminPassword();
}
else if(option_number==6)
{
    editStudentGrade();
}
else if(option_number==7)
{
    system_init();
}
else
{
    printf("Invalid Option.");
}
}
