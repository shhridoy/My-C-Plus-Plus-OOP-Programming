#include<iostream>
#include<string.h>
using namespace std;
class Str_len{
public:
    char *p;
    void Print(void){
        cout<< "\t" << p << "\tLength is: " << strlen(p) <<endl;
    }
    Str_len(){
        p = new char[50];
    }
    Str_len(Str_len &);
};

Str_len :: Str_len(Str_len& str)
{
    strcpy(p, str.p);
}
int main(void)
{
    Str_len str1, str2;
    strcpy(str1.p, "Str1: M Kamruzzaman");
    cout<< "Before Assigning: \n";
    str1.Print();
    str2 = str1;
    strcpy(str1.p, "Str1: B. M. Morshed");
    cout<< "\n\nAfter Assigning: \n";
    str1.Print();
    str2.Print();
}
