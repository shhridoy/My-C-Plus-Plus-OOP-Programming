#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Employee{
private:
    char* empName;
    int joinYear;
    float empSalary;
public:
    Employee(char* Name, int Year, float Salary);
private:
    int WorkedYear(void);
    void PrintInfo(void);
};

Employee :: Employee(char* Name, int Year, float Salary){
    empName = Name;
    joinYear = Year;
    empSalary = Salary;
    PrintInfo();
}

int Employee :: WorkedYear(void){
    int current_year = 2016;
    int yearDiff = current_year - joinYear;
    return (yearDiff);
}

void Employee :: PrintInfo(void){
    cout<< "Name: "<<empName<<endl;
    cout<<"Join Date: "<<joinYear<<endl;
    cout<<"Salary: "<<empSalary<<endl;
    cout<<"Worked: "<<WorkedYear()<<" year"<<endl;
    cout<<"\n"<<endl;
}

int main(void)
{
    Employee kuddus("Kuddus", 2005, 25000);
    Employee mofiz("Mofiz", 2008, 22000);
    Employee rahaman("Rahaman", 2006, 24000);
    Employee miraj("Miraj", 2012, 17000);
}
