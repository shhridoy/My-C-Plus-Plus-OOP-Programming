#include<iostream>
#include<string.h>
using namespace std;
class ObjRet{
    char name[25];
public:
    void GetName(char *n){strcpy(name, n);}
    void PrintName(void){cout<< "\n\nSo your name is: "<<name<<endl;}
};

ObjRet funcA(void)
{
    char getName[25];
    ObjRet ob;
    cout<< "Enter Your Name: ";
    cin>> getName;
    ob.GetName(getName);
    return ob;
}

int main(void)
{
    ObjRet obMain;
    obMain = funcA();
    obMain.PrintName();
}
