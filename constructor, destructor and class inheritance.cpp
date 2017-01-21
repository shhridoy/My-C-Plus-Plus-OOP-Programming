#include<iostream>
using namespace std;
class base{
public:
    base(){cout<< "\tBase constructor called" <<endl;}
    ~base(){cout<< "\tBase destructor called" <<endl;}
};
class derived : public base{
public:
    derived(){cout<< "\tDerived constructor called" <<endl;}
    ~derived(){cout<< "\tDerived destructor called" <<endl;}
};
int main(void)
{
    cout<< "Calling Constructors...." <<endl<<endl;
    derived d1;
    cout<< "\n\nCalling Destructors...." <<endl;
}
