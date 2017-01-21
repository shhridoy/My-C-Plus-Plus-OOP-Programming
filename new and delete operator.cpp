#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    struct Student{
        char name[25];
        char id[25];
        char dept[10];
        float Cgpa;
    };
    Student *ptr;
    ptr = new Student;
    strcpy(ptr->name, "SH Hridoy");
    strcpy(ptr->id, "ASH1501037M");
    strcpy(ptr->dept, "CSTE");
    ptr->Cgpa = float(3.40);

    cout<< "\nName: " << ptr->name <<endl;
    cout<< "ID: " << ptr->id <<endl;
    cout<< "Dept: " << ptr->dept <<endl;
    cout<< "CGPA: " << ptr->Cgpa <<endl;
}
