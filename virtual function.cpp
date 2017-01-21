#include<iostream>
using namespace std;

class base{
public:
    virtual void Msg(){cout<<"\'Msg()\' from \'base\' class" <<endl;}
    void NonVirtual(){cout<<"\'NonVirtual()\' from \'base\' class" <<endl;}
};

class derived1 : public base{
public:
    void Msg(){cout<<"\'Msg()\' from \'derived1\' class" <<endl;}
    void NonVirtual(){cout<<"\'NonVirtual()\' from \'derived1\' class" <<endl;}
};

class derived2 : public base{
    //no override function
};

int main(void)
{
    base *baseptr;
    derived1 d1;
    derived2 d2;

    baseptr = &d1;
    baseptr-> Msg();
    baseptr-> NonVirtual();

    cout<<endl;

    baseptr = &d2;
    baseptr-> Msg();
    baseptr-> NonVirtual();
}
