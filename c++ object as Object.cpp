#include<iostream>
#include<string.h>
using namespace std;
class Student{
    char S_name[14];
    char S_id[20];
    float S_Cgpa;
public:
    void GetInfo(char *name, char *id, float cgpa){
        strcpy(S_name, name);
        strcpy(S_id, id);
        S_Cgpa = cgpa;
    }
    void ShowInfo(void){
        cout<< "Name: " << S_name <<endl;
        cout<< "Id: " << S_id <<endl;
        cout<< "CGPA: " << S_Cgpa <<"\n"<<endl;
    }
};

int main(void)
{
    Student A, B;
    A.GetInfo("SH Hridoy", "ASH1501037M", 3.40);
    B = A;
    cout<< "\nPrinting Object A Information:\n " <<endl;
    A.ShowInfo();
    cout<< "\nPrinting Object B Information:\n " <<endl;
    B.ShowInfo();
}
