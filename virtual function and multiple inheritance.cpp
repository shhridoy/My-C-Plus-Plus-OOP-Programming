#include <iostream>
using namespace std;

class base{
public:
    virtual void Msg(){cout<<"Message from base."<<endl;}
};

class derived1 : public base{
public:
    void Msg(){cout<<"Message from derived1."<<endl;}
};

class derived2 : public derived1{
public:
    void Msg(){cout<<"Message from derived2."<<endl;}
};

class derived3 : public derived2{
};

int main()
{
    base *baseptr;
    derived1 d1;
    derived2 d2;
    derived3 d3;

    baseptr = &d1;
    baseptr->Msg();

    baseptr = &d2;
    baseptr->Msg();

    baseptr = &d3;
    baseptr->Msg();
}
