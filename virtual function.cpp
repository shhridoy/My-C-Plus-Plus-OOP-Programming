#include <iostream>
using namespace std;

class base{
public:
    virtual void Msg(){cout<<"This is from base class."<<endl;}
    void NonVirtual(){cout<<"This is Non virtual from base class."<<endl;}
};

class derived1 : public base{
public:
    void Msg(){cout<<"This is from derived1."<<endl;}
    void NonVirtual(){cout<<"This is Non virtual from derived1."<<endl;}
};

class derived2 : public base{
};

int main()
{
    base *baseptr;
    derived1 d1;
    derived2 d2;

    baseptr = &d1;
    baseptr->Msg();
    baseptr->NonVirtual();

    baseptr = &d2;
    baseptr->Msg();
    baseptr->NonVirtual();
}
