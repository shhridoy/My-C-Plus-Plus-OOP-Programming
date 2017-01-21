#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

enum acc_type{CURRENT=1, SAVINGS=2, FIXED=3};

//---------- class definition for account type object in Commercial bank ------------
class acc{
private:
    int acc_id;         //Account Number.
    char name[25];      //Name of Account holder.
    acc_type type;      //Type of the account.
public:
    acc();                                  //constructor with no parameter
    acc(int id, char *name, acc_type);      //constructor with 3 parameter
    acc(ifstream &fin);                     //constructor with 1 parameter
    void display(void);
    ~acc(){};                               //destructor
};

//------------- member function definition -----------------------------
acc :: acc()
{
    int type;
    cout<< endl << "Enter Account ID: #";
    cin>> acc_id;
    cout<< endl << "Enter Name of Account holder: ";
    cin>> name;
    cout<< endl << "Enter Account Type(CURRENT=1, SVINGS=2, FIXED=3): ";
    cin>> type;
    acc :: type = (acc_type)type;           //assignment for base class's 'type'
}

acc :: acc(int id, char *name, acc_type t)
{
    acc_id = id;
    strcpy(acc::name, name);
    type = t;
}

acc :: acc(ifstream& fin)
{
    fin.open("E:\\Overload.txt", ios::in);        //Open file
    if(! fin){
        cout<< endl << "File Error: File not found..." <<endl;
        cout<< "So, No record is created, object is empty of Garbage.";
        return;
    }
    fin>> acc_id;
    fin>> name;
    int type;
    fin>> type;
    acc :: type = (acc_type)type;
}

void acc :: display()
{
    static int out_no=1;
    cout<< endl << "Output#" <<out_no++;
    char *type_name[] = {"", "CURRENT", "SAVINGS", "FIXED"};
    cout<< endl << "Account Id #" << acc_id <<endl;
    cout<< "Name\t: " <<name<<endl;
    cout<< "Account type: " << type_name[type] <<endl;
}

int main(void)
{
    ifstream fin;
    acc a1, a2(2, "Niton", SAVINGS), a3(fin);
    a1.display();
    a2.display();
    a3.display();
}
