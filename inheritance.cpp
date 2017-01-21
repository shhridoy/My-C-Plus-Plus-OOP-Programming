#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char Name[30];
    char Id[20];
public:
    Student(char *name, char *id){
        strcpy(Student::Name, name);
        strcpy(Student::Id, id);
    }
    void ShowStudentInfo(void){
        cout<< "\nName: " << Name <<endl;
        cout<< "ID: " << Id <<endl;
    }
};

class Registration : public Student{
    float RegFees;
    char *RegDate;
public:
    Registration(char *name, char *id, float fees, char *date) : Student(name, id){
        RegFees = fees;
        strcpy(Registration::RegDate, date);
    }
    void ShowRegInfo(void){
        ShowStudentInfo();
        cout<< "Fees: " << RegFees <<endl;
        cout<< "Date: " << RegDate <<endl;
    }
};

int main(void)
{
    Registration Niton("M. Kamruzzaman", "ASH1501037M", 21000.00, "08/03/2015");
    Niton.ShowStudentInfo();
    Niton.ShowRegInfo();
}
