#include <iostream>
using namespace std;
class base{
public:
    base(){cout<<"Class base Constructor"<<endl;}
    ~base(){cout<<"Class base Destructor"<<endl;}
};
class base1{
public:
     base1(){cout<<"Class base1 Constructor"<<endl;}
     ~base1(){cout<<"Class base1 Destructor"<<endl;}
};
class base2{
public:
    base2(){cout<<"Class base2 Constructor"<<endl;}
    ~base2(){cout<<"Class base2 Destructor"<<endl;}
};
class derived : public base, private base1, public base2{
public:
    derived(){cout<<"Class derived Constructor"<<endl<<endl;}
    ~derived(){cout<<"Class derived Destructor"<<endl;}
};

int main()
{
    derived d1;

    return 0;
}
