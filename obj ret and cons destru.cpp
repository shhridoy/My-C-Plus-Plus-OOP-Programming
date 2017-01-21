#include<iostream>
#include<string.h>
using namespace std;

class Person{
    char name[25];
public:
    Person(){cout<< "\nCreating.....";} //Constructor
    void PrintName(void){cout<< "\nName: " <<name<<endl;}
    void GetName(char *n){strcpy(name, n);}
    ~Person(){cout<< "\nDestructing.....";}  //Destructor
};

int main(void)
{
    Person ob[5];
    ob[0].GetName("Rana");
    ob[1].GetName("Rokib");
    ob[2].GetName("Nahid");
    ob[3].GetName("Nochi");
    ob[4].GetName("Tuhin");
    for(int i=0; i<5; i++){
        ob[i].PrintName();
    }
}
